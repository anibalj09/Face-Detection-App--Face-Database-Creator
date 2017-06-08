#ifndef FACEDETECTIONAPP_H
#define FACEDETECTIONAPP_H

#include "ui_facedetectionapp.h"
#include "opencvworker.h"
#include <QTimer>
#include <QThread>
#include <QFileDialog>
#include <QInputDialog>
#include <qprogressdialog.h>
#include <Windows.h>
#include <fstream>
#include <iostream>

/*
	The FaceDetectionApp class is responsible for all connections for the qt ui elements,
	and making and sending the threads to the opencvWorker class for the webcam stream.
*/

class FaceDetectionApp : public QMainWindow
{
	Q_OBJECT

public:
	//Constructor
	FaceDetectionApp(QWidget *parent = 0);
	//Destructor
	~FaceDetectionApp();


signals:
	//Sends signal to set up webcam stream.
	void sendSetup(int, bool);
	//Sends signal to toggle video (play/pause).
	void sendToggleVideo();
	//Sends signal to stop video and display detected faces in frame.
	void sendShowDetectFaces();
	//Signal to stop streaming.
	void sendStopStreaming();
	//Signal for saving all faces in a time period.
	void sendSaveAllFaces(int aTime);

	///***** UI FUNCTION *****

//Slots are used for receiving signals. This slots are both for receiving signals from ui elements, and the thread.
private slots:
	void on_StartBtn_clicked();
	void on_AboutBtn_clicked();
	void on_SettingsBtn_clicked();
	void on_NextBtn_clicked();
	void on_GoBackBtn_clicked();
	void on_GoBack2Btn_clicked();
	void on_GoBack3Btn_clicked();
	void on_GoBack4Btn_clicked();
	void on_SaveFacesBtn_clicked();
	void on_ChooseFolderBtn_clicked();
	void on_TestWebcamBtn_clicked();

	//Receives frame for diplaying on QLabel.
	void receiveFrame(QImage aFrame);
	//Pauses or plays video. Enables or disables detects faces. Always disables and hides save faces button.
	//Emits signal to toggle video on/off, which does not close videocapture. Activated when StartStreamBtn is clicked.
	void receiveToggleStream();
	//Pauses video, shows image with detected faces, and enables save face button.
	//Emits signal to detect faces in frame. Toggles video off, and shows detected faces in frame on label. Activated when DetectFacesBtn is clicked.
	void showDetectFaces();
	//Slot for receiving vector of faces for saving.
	void receiveFaceVector(QImage aFrame, std::vector <cv::Mat> facesVector);
	//Slot for emitting signal for saving all faces in a time period.
	void receiveSaveAllFaces();
	//Slot for recieving frames for saving in time frame.
	void recieveFrameTimeFrame(std::vector <cv::Mat> facesVector);
	//Slot for receiving when there was an error with the webcam. Disables all buttons except Go Back.
	void receiveDisableEverythingError();

private:
	//Struct to create objects that contain all the information related to an image when reading/comparing the CSV file.
	struct subjectInfo
	{
		std::string folder;
		std::string name;
		std::string type;
		int number;
		cv::Size imageSize;
	}aSubject;


	///***** UI-RELATED VARIABLES *****
	//ui variable; connects to ui designed in qt designer (qt ui file)
	Ui::FaceDetectionAppClass ui;

	///***** GLOBAL VARIABLES *****
	//Thread variable for accesing the opencvWorker class' functions. A thread is needed so that ui elements are not frozen when displaying webcam stream.
	QThread* thread;
	//String variable for holding the folder directory that the user chose for saving the face images and CSV file in.
	QString folderDir;
	//String variable for holding the subject name applied for all subjects in a session.
	QString subjectName;
	//Vector holding all subject names used in the CSV file. Used for face matching purposes.
	//QVector<QString> subjectNameVector;
	//Bool variable to know if the user wants the subject name to be universal or not.
	bool universalNameFlag;
	//Vector for holding face images
	std::vector <cv::Mat> facesForSaving;
	//String containing the file type to save the images in.
	std::string imageFileType;
	//Variable for reading/writing onto the CSV file
	std::fstream csvFile;
	//Variable that stores the name of the CSV file and it's file type.
	const std::string CSV_FILE_NAME = "csvFile.txt";
	//Variable that holds the full directory of the CSV file.
	std::string csvFileFullPath;
	//Variable that holds the current image's size
	//cv::Size imageSize;
	//Variable that holds the webcam number to open.
	int webcamNumber;
	//Boolean to know if the user wants to save the images in black and white
	bool isBW;

	///***** NON-UI FUNCTIONS *****
	//Verifies if directory sent through parameter exists in pc. Used to verify if directory of face database still exists when saving face images to folder.
	bool DirectoryExists(const std::string& directory);
	//Setups every element, including qthread and connections, for video streaming. Enables/disables appropiate ui elements as well.
	void webcamStreamSetup();
	//Function for verifying if the CSV file was created and is able to be opened. If CSV file already exists, it won't be affected
	void checkCSVfile();
	//Function for creating the CSV file.
	void createCSVfile();
	//Function for inserting into the CSV file
	void insertIntoCSVfile(std::string filePath);
	//Function that returns filepath by creating it with information from struct object.
	std::string createCSVimageFilePath();
	//Function that gets all necessary data from CSV file for struct object.
	void getCSVfileInformation();
	//Function that splits subject number from whole file path in CSV file and returns it.
	int getSubjectNumberFromPath(std::string linePath);
	//Function that splits subject name from whole file path in CSV file and returns it.
	std::string getSubjectNameFromPath(std::string linePath);
	//Function for calculating subject number from paths in CSV file.
	int calculateSubjectNumber();
	//Function for checking if the CSV file is empty.
	bool fileIsEmpty();
	//Function for enabling the checkboxes for saving the face images.
	void enableFaceCheckboxes(int vectorSize);
	//Function for disabling all checkboxes.
	void disableFaceCheckboxes();
	//Function for verifying if folder and CSV file still exist before saving images.
	//bool filesExist();
	//Function for verifying if the text entered by the user (subject name) follows the guidelines.
	bool verifySubjectName(std::string name);
};

#endif // FACEDETECTIONAPP_H
