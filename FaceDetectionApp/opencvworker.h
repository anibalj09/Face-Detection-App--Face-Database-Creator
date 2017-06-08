#ifndef OPENCVWORKER_H
#define OPENCVWORKER_H

#include <QObject>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include "opencv2/objdetect.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/core/core.hpp"
#include <time.h>
#include <QImage>
#include <QMessageBox>

class opencvWorker : public QObject
{
	Q_OBJECT

private:
	//Matrix file that will contain the original frame of the video.
	cv::Mat originalFrame;
	//Video capture that will open the webcam device for streaming. Also gets frame from it.
	cv::VideoCapture cap;

	//Boolean to toggle video on and off.
	bool toggleVideo;
	//Boolean for showing detected faces in frame.
	bool showDetectedFaces;
	//Boolean for saving faces in a time period
	bool saveAllFacesInTimeFrame;
	//Id of device/webcam to stream.
	int deviceToOpen;
	//String variable that holds the folder path to save the faces.
	std::string folderPath;
	//Number of seconds to save constantly.
	int timeFrame;
	//Time variables for saving faces in a time frame.
	time_t now, beginning;
	//Boolean to know if user wants to save faces in black and white.
	bool isBW;

	//Reopens device if its closed. If not, releases video and reopens.
	void verifyIfDeviceAlreadyOpened(const int device);
	//Detects face in frame. Pases detected faces marked with circle to processedFrame.
	void processFrame();
	//Detects faces in frame, but only saves the faces in vector without processing the frame.
	void detectFacesInFrame();
	//Releases capture device.
	void releaseCapture();

	//File that contains haar cascade classifier for identifying faces.
	std::string face_cascade_name = "haarcascade_frontalface_alt.xml";
	//Cascade classifier that uses the file shown in face_cascade_name to detect faces in frame.
	cv::CascadeClassifier face_cascade;
	
	//Vector that will contain faces detected in frame to save in folder.
	std::vector <cv::Mat> facesForSaving;


public:
	//Constructor.
	explicit opencvWorker(QObject *parent, std::string folderP);
	//Destructor.
	~opencvWorker();
	
signals:
	//Sends either processeFrame or originalFrame (depending if processFrame() was called) to label in Qt GUI.
	void sendFrame(QImage processedF);
	//Sends frame for detected face
	void sendDetectedFaceFrame(QImage processedF, std::vector <cv::Mat> detectedFaces);
	//Sends frame for saving without displaying
	void sendFrameTimeFrame(std::vector <cv::Mat> detectedFaces);
	//Sends signal that there was an error on frame grabbing. Disables everything on GUI when received.
	void sendSignalErrorOnStream();
	

public slots:
	//Gets frame from capture device, processes it, and sends it to label in GUI. Steps depend if video is toggled or if the user wants to detect faces.
	void receiveGrabFrame();
	//Sets up videoCapture *cap device. Opens webcam stream sent through paramater.
	void receiveSetup(const int device, bool saveFacesColor);
	//Plays/Pauses webcam stream. Doesn't release videoCapture device.
	void receiveToggleVideo();
	//Receives signal to show detected faces (ergo, detect faces in frame). 
	void receiveShowDetectedFaces();
	//Releases capture device. Does the same as releaseCapture()
	void receiveStopStreaming();
	//Receives signal for saving all faces in a time frame.
	void recieveSaveAllFacesTime(int aTime);
};

#endif // OPENCVWORKER_H
