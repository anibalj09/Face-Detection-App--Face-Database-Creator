#include "opencvworker.h"

opencvWorker::opencvWorker(QObject *parent, std::string folderP)
	: QObject(parent),
	toggleVideo(false),
	showDetectedFaces(false),
	saveAllFacesInTimeFrame(false)
{
	//Get folder path from FaceDetectionApp class.
	folderPath = folderP;

	//Load face cascade classifier. Verify if it loaded.
	if (!face_cascade.load(face_cascade_name))
	{
		//Initialization of a message box.
		QMessageBox aMessageBox;
		//Message Box will open and main window cannot be interacted with. The message box will have a set size that cannot be changed.
		aMessageBox.critical(0, "Error", "Face Cascade Classifier didn't load correctly!");
		aMessageBox.setFixedSize(500, 200);
		//Sends signal to stop everything, so error doesn't occur.
		emit sendSignalErrorOnStream();
		return;
	};
}

opencvWorker::~opencvWorker()
{
	//VideoCapture device has been released.
	if (cap.isOpened())
		cap.release();
}

void opencvWorker::receiveToggleVideo()
{
	//Webcam stream is paused or started. It is toggled everytime is called.
	toggleVideo = !toggleVideo;

	//If it was toggled to start webcam stream, open webcam.
	if (toggleVideo == true && cap.isOpened() == false)
	{
		cap.open(deviceToOpen);
		showDetectedFaces = false;
	}
}

void opencvWorker::receiveShowDetectedFaces()
{
	//Boolean to show detected faces is toggled.
	showDetectedFaces = !showDetectedFaces;
}

void opencvWorker::recieveSaveAllFacesTime(int aTime)
{
	//Face Vector is sent, but frames are not sent to be displayed.
	showDetectedFaces = false;
	//Face Vector is cleared.
	facesForSaving.clear();
	//Time for saving faces is saved.
	timeFrame = aTime;
	saveAllFacesInTimeFrame = !saveAllFacesInTimeFrame;
	//Webcam is verified is open or not.
	verifyIfDeviceAlreadyOpened(deviceToOpen);
	//Time when webcam stream began is saved.
	time(&now);
	time(&beginning);
	//Webcam stream frame capture starts.
	toggleVideo = true;
}

void opencvWorker::receiveGrabFrame()
{
	//If it was toggled to start streaming...
	if (toggleVideo == true)
	{
		//Get frame from webcam.
		cap.read(originalFrame);
		//If its empty...
		if (originalFrame.empty())
		{
			//Initialization of a message box.
			QMessageBox aMessageBox;
			//Message Box will open and main window cannot be interacted with. The message box will have a set size that cannot be changed.
			aMessageBox.critical(0, "Error", "Frame was empty! Something happened with the webcam. Go back and retry.");
			aMessageBox.setFixedSize(500, 200);
			toggleVideo = false;
			//Everything will be stopped, since there are no frames to collect.
			emit sendSignalErrorOnStream();
			return;
		}
		//If it was toggled to show detected faces in webcam frame...
		if (showDetectedFaces == true)
		{
			//Capture device is released.
			releaseCapture();
			//Loop will stop.
			toggleVideo = false;
			//Frame captured will be processed (faces will be detected).
			processFrame();

			//Conversion from cv::Mat to QImage.
			if (originalFrame.channels() == 3)
			{
				cv::cvtColor(originalFrame, originalFrame, CV_BGR2RGB);
				QImage outputFrame((const unsigned char*)originalFrame.data, originalFrame.cols, originalFrame.rows, QImage::Format_RGB888);
				//Faces in vector and frame will be sent.
				emit sendDetectedFaceFrame(outputFrame, facesForSaving);
			}
			else
			{
				QImage outputFrame((const unsigned char*)originalFrame.data, originalFrame.cols, originalFrame.rows, QImage::Format_Indexed8);
				//Faces in vector and frame will be sent.
				emit sendDetectedFaceFrame(outputFrame, facesForSaving);
			}

		}
		else if(saveAllFacesInTimeFrame == true)
		{
			//If it was toggled to save all Faces in the time frame chosen by user...

			//If the difference from when this loop started and 'now' is equal to how many seconds the user chose to save all faces...
			if (difftime(now, beginning) >= timeFrame)
			{
				//Stop webcam stream.
				releaseCapture();
				toggleVideo = false;
				//It won't enter this if.
				saveAllFacesInTimeFrame = false;
				//Send all faces detected.
				emit sendFrameTimeFrame(facesForSaving);
			}
			else
			{
				//Detect faces to insert into vector.
				detectFacesInFrame();
				//Get time from 'now'.
				time(&now);
			}
		}
		else
		{
			//If it's only displaying the webcam stream, it will enter here.
			//Conversion from cv::Mat to QImage.
			if (originalFrame.channels() == 3) {

				cv::cvtColor(originalFrame, originalFrame, CV_BGR2RGB);
				QImage outputFrame((const unsigned char*)originalFrame.data, originalFrame.cols, originalFrame.rows, QImage::Format_RGB888);
				//Frame will be sent.
				emit sendFrame(outputFrame);
			}
			else
			{
				QImage outputFrame((const unsigned char*)originalFrame.data, originalFrame.cols, originalFrame.rows, QImage::Format_Indexed8);
				//Frame will be sent.
				emit sendFrame(outputFrame);
			}
		}
	}
	else
		return;
}

void opencvWorker::receiveSetup(const int device, bool saveFacesColor)
{
	//Webcam is verified if its open or not.
	verifyIfDeviceAlreadyOpened(device);
	if (!cap.isOpened())
		return;
	//Device to stream from is saved globally on this class.
	deviceToOpen = device;
	//Decision to save faces in Black & White or Color is saved globally in this class.
	isBW = saveFacesColor;
}

void opencvWorker::verifyIfDeviceAlreadyOpened(const int device)
{
	//If capture device is open, then release to start again.
	if (cap.isOpened())
		cap.release();
	//Video capture device will open the device again.
	cap.open(device);
}

void opencvWorker::processFrame()
{
	//A vector that will contain the position of the faces detected.
	std::vector<cv::Rect> faces;
	//Greyscale image of the original frame.
	cv::Mat frame_gray;
	//Converting to grayscale.
	cv::cvtColor(originalFrame, frame_gray, cv::COLOR_BGR2GRAY);
	cv::equalizeHist(frame_gray, frame_gray);
	//Detection of faces...
	face_cascade.detectMultiScale(frame_gray, faces, 1.1, 3, 0 | cv::CASCADE_SCALE_IMAGE, cv::Size(30, 30));

	//Temporary face vector for saving the faces.
	std::vector<cv::Mat> tempFaceVector;
	//Counter starting at 1 and string stream are created for drawing the face number inside the ellipse in the original frame.
	int x = 1;
	std::stringstream ss;
	for (size_t i = 0; i < faces.size(); i++)
	{
		//If the images are going to be in Black & White...
		if (isBW)
		{
			//Get the section of the frame (where the face is) from the greyscale image into the temporary vector.
			tempFaceVector.push_back(frame_gray(faces[i]));
		}
		else
		{
			//Get the section of the frame (where the face is) from the original image into the temporary vector.
			tempFaceVector.push_back(originalFrame(faces[i]));
		}
		//Center of the face is calculated.
		cv::Point center(faces[i].x + faces[i].width / 2, faces[i].y + faces[i].height / 2);
		//A circle is drawn over the face in the original frame.
		cv::ellipse(originalFrame, center,cv::Size(faces[i].width / 2, faces[i].height / 2), 0, 0, 360, cv::Scalar(255, 0, 255), 4, 8, 0);
		//Counter is entered into string stream.
		ss << x;
		//Counter is drawn over the original frame in the center of the ellipse.
		cv::putText(originalFrame, ss.str(), center, cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(255, 0, 255), 5, cv::LINE_AA);
		x++;
		//String stream's contents are cleared.
		ss.str(std::string());
	}
	//Global vector takes all face images.
	facesForSaving = tempFaceVector;
	//User will be notified if any faces were detected.
	if (facesForSaving.empty())
	{
		QMessageBox::information(NULL, "Done!", "No faces detected.");
	}
	else
	{
		QMessageBox::information(NULL, "Done!", "Faces Detected!");
	}

}

void opencvWorker::detectFacesInFrame()
{
	//A vector that will contain the position of the faces detected.
	std::vector<cv::Rect> faces;
	//Greyscale image of the original frame.
	cv::Mat frame_gray;
	//Converting to grayscale.
	cv::cvtColor(originalFrame, frame_gray, cv::COLOR_BGR2GRAY);
	cv::equalizeHist(frame_gray, frame_gray);

	//Detection of faces...
	face_cascade.detectMultiScale(frame_gray, faces, 1.1, 3, 0 | cv::CASCADE_SCALE_IMAGE, cv::Size(30, 30));

	//All face images are saved into vector.
	for (size_t i = 0; i < faces.size(); i++)
		facesForSaving.push_back(frame_gray(faces[i]));
}

void opencvWorker::releaseCapture()
{
	//Stop webcam streaming.
	if (cap.isOpened())
		cap.release();
	toggleVideo = false;
}

void opencvWorker::receiveStopStreaming()
{
	//Capture device will be released.
	if (cap.isOpened())
		cap.release();
}
