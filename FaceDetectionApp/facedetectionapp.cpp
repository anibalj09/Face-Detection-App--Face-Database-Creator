#include "facedetectionapp.h"

///CONSTRUCTOR
FaceDetectionApp::FaceDetectionApp(QWidget *parent)
	: QMainWindow(parent)
{
	//Default number for webcam is 0 (integrated webcam).
	webcamNumber = 0;
	//Default mode for saving images is Black & White
	isBW = true;
	//Images will be saved in png format.
	imageFileType = "png";
	//Thread object is null to know when to delete or not the object.
	thread = NULL;
	//Ui from qt designer is set up as the one to be used here.
	ui.setupUi(this);
	//The window in the page combobox to be displayed first is the main menu.
	ui.StackW->setCurrentWidget(ui.MainMenuPage);
}

///DECONSTRUCTOR
FaceDetectionApp::~FaceDetectionApp()
{
	//If thread object has been initialized (webcams stream has been started once).
	if (thread != NULL)
	{
		//Thread quits at the end.
		thread->quit();
		//It waits for the thread to quit.
		while (!thread->isFinished());
		//Deletes the thread.
		delete thread;
	}
}

///
///PAGE NAVIGATION BUTTON SLOTS
///

void FaceDetectionApp::on_StartBtn_clicked()
{
	//Changes current page to Pre-Stream Information Input Page.
	ui.StackW->setCurrentWidget(ui.PreStreamInputPage);
}

void FaceDetectionApp::on_AboutBtn_clicked()
{
	//Changes current page to About Page.
	ui.StackW->setCurrentWidget(ui.AboutPage);
}

void FaceDetectionApp::on_SettingsBtn_clicked()
{
	//Changes current page to Settings Page.
	ui.StackW->setCurrentWidget(ui.SettingsPage);
}

void FaceDetectionApp::on_NextBtn_clicked()
{
	/*
	Validate data from user inputs from Pre-Stream Information Input Page, when the Next button is pressed.
	*/
	
	//The subject name from the text field will be saved in the variable and the flag will either be turned on or off.
	if (ui.SubjectNameCheckBox->isChecked())
	{
		subjectName = ui.subjectNameLabel1->text();
		universalNameFlag = true;
	}
	else
	{
		subjectName = ui.subjectNameLabel1->text();
		universalNameFlag = false;
	}

	//If any of the fields are empty, a message box with an error will pop up.
	if((subjectName.isEmpty()) || (folderDir.isEmpty()))
	{
		//Initialization of a message box.
		QMessageBox aMessageBox;
		//Message Box will open and main window cannot be interacted with. The message box will have a set size that cannot be changed.
		aMessageBox.critical(0, "Error", "One or more fields are missing from this screen. Please enter missing items.");
		aMessageBox.setFixedSize(500, 200);
	}
	else if (verifySubjectName(subjectName.toStdString()) == false)
	{
		//Verifies if the subject name has any special characters besides letters.
		
		//Initialization of a message box.
		QMessageBox aMessageBox;
		//Message Box will open and main window cannot be interacted with. The message box will have a set size that cannot be changed.
		aMessageBox.critical(0, "Error", "Subject name has to be characters only, without special characters or numbers.");
		aMessageBox.setFixedSize(500, 200);
	}
	else
	{
		if (DirectoryExists(folderDir.toStdString()) == false)
		{
			//Initialization of a message box.
			QMessageBox aMessageBox;
			//Message Box will open and main window cannot be interacted with. The message box will have a set size that cannot be changed.
			aMessageBox.critical(0, "Error", "Folder path that is chosen is invalid. Choose another folder.");
			aMessageBox.setFixedSize(500, 200);
		}
		else
		{
			//Changes current page to Face Detection and Webcam Stream Page.
			ui.StackW->setCurrentWidget(ui.FaceDetectionPage);
			webcamStreamSetup();
		}
	}
}

void FaceDetectionApp::on_GoBackBtn_clicked()
{
	//Changes current page to Main Menu Page.
	ui.StackW->setCurrentWidget(ui.MainMenuPage);
}
void FaceDetectionApp::on_GoBack2Btn_clicked()
{
	
	//Changes current page to Main Menu Page.
	//Thread quits.
	thread->quit();
	//It waits for the thread to quit.
	while (!thread->isFinished());
	//Changes current page to Main Menu Page.
	ui.StackW->setCurrentWidget(ui.MainMenuPage);	
	//Emits signal to stop the webcam stream.
	emit(sendStopStreaming());
}
void FaceDetectionApp::on_GoBack3Btn_clicked()
{
	//Changes current page to Main Menu Page.
	ui.StackW->setCurrentWidget(ui.MainMenuPage);
}
void FaceDetectionApp::on_GoBack4Btn_clicked()
{
	//When getting out of the Settings Page, record information from it.
	
	//Check if the user wants to save the image in Black & White, or in Color.
	if (ui.BWRadioButton->isChecked())
		isBW = true;
	else
		isBW = false;
	//Changes current page to Main Menu Page.
	ui.StackW->setCurrentWidget(ui.MainMenuPage);
}

void FaceDetectionApp::on_TestWebcamBtn_clicked()
{
	//Take the check box number, and use it to test the webcam.
	int i;
	if (ui.WebcamZeroRadioBtn->isChecked())
		i=0;
	if (ui.WebcamOneRadioBtn->isChecked())
		i=1;
	if (ui.WebcamTwoRadioBtn->isChecked())
		i=2;
	if (ui.WebcamThreeRadioBtn->isChecked())
		i=3;
	if (ui.WebcamFourRadioBtn->isChecked())
		i=4;

		//Test to open and close the webcam.
		cv::VideoCapture camera;
		cv::Mat aFrame;
		camera.open(i);
		if (!camera.isOpened())
		{
			camera.release();
			//Initialization of a message box.
			QMessageBox aMessageBox;
			//Message Box will open and main window cannot be interacted with. The message box will have a set size that cannot be changed.
			aMessageBox.critical(0, "Error", "Webcam couldn't be opened. Try another one.");
			aMessageBox.setFixedSize(500, 200);
		}
		else
		{
			camera.read(aFrame);
			//If somehow the VideoCapture device was able to 'open' something else that wasn't a webcam, check if a frame can be taken from it.
			if (aFrame.empty())
			{
				//Initialization of a message box.
				QMessageBox aMessageBox;
				//Message Box will open and main window cannot be interacted with. The message box will have a set size that cannot be changed.
				aMessageBox.critical(0, "Error", "Webcam couldn't be opened. Try another one.");
				aMessageBox.setFixedSize(500, 200);
			}
			else
			{
				QMessageBox::information(NULL, "Okay!", "Webcam worked.");
				webcamNumber = i;
			}

			camera.release();
		}
}

///
///BUTTON SLOTS
///

void FaceDetectionApp::on_ChooseFolderBtn_clicked()
{
	//TAKEN FROM "STANDARD DIALOGS EXAMPLE" IN THE QT DOCUMENTATION.
	//A File Dialog window opens up to get the directory from the user. The File Dialog opens the native File Explorer. 
	QFileDialog::Options options = QFileDialog::DontResolveSymlinks | QFileDialog::ShowDirsOnly;
	//The folder directory is saved on the folderDir variable.
	folderDir = QFileDialog::getExistingDirectory(this, tr("Choose Folder to Save Images"), ui.FolderPathLbl->text(), options);
	//If the varibable has the folder directory, it's presented in the label.
	if (!folderDir.isEmpty())
	{
		//Add the '/' character to the folder directory (folderDir).
		std::string tempFolderPath = folderDir.toStdString() + '/';
		folderDir = QString::fromStdString(tempFolderPath);
		//Show folder directory chosen by user.
		ui.FolderPathLbl->setText(folderDir);
	}
}

void FaceDetectionApp::receiveToggleStream()
{
	//Changes text on play/pause button, and enables/disables the appropiate buttons.
	if ((ui.StartStreamBtn->text().toStdString()) == ">")
	{
		//Webcam stream has started: it can be paused.
		ui.StartStreamBtn->setText("||");
		//SaveFacesBtn is hidden, since it can only be shown when DetectFacesBtn is pressed.
		ui.SaveFacesBtn->setHidden(true);
		//Detect Faces button is enabled when the webcam stream has started.
		ui.DetectFacesBtn->setEnabled(true);
		disableFaceCheckboxes();
	}
	else
	{
		//Webcam stream has paused: it can be started.
		ui.StartStreamBtn->setText(">");
		//Detect Faces button is disabled in case the label doesn't have a frame in it.
		ui.DetectFacesBtn->setEnabled(false);
		ui.SaveFacesBtn->setHidden(true);
	}
	
	//Appropiate tools for saving images are hidden.
	ui.subjectNameLabel2->setHidden(true);
	ui.subjectNameInstructionLbl->setHidden(true);
	ui.CheckboxScrollArea->setHidden(true);
	ui.CheckBoxInstructionLbl->setHidden(true);

	//Emit message that webcam has been started/stopped.
	emit sendToggleVideo();
}

void FaceDetectionApp::showDetectFaces()
{
	//Start stream is set to paused.
	ui.StartStreamBtn->setText(">");
	ui.DetectFacesBtn->setEnabled(false);
	ui.SaveFacesBtn->setHidden(false);

	ui.CheckboxScrollArea->setHidden(false);
	ui.CheckBoxInstructionLbl->setHidden(false);
	ui.SaveAllFacesTimeBtn->setEnabled(true);
	//Change ui elements depending on flag.
	if (universalNameFlag == false)
	{
		ui.subjectNameLabel2->setHidden(false);
		ui.subjectNameInstructionLbl->setHidden(false);
	}
	//Emit signal to detect all faces within time frame.
	emit sendShowDetectFaces();
}

void FaceDetectionApp::on_SaveFacesBtn_clicked()
{
	if(DirectoryExists(folderDir.toStdString()) == false)
	{
		//Initialization of a message box.
		QMessageBox aMessageBox;
		//Message Box will open and main window cannot be interacted with. The message box will have a set size that cannot be changed.
		aMessageBox.critical(0, "Error", "Folder for images and CSV file can't be reached! Returning to main menu.");
		aMessageBox.setFixedSize(500, 200);
		
		//Changes current page to Main Menu Page.
		ui.StackW->setCurrentWidget(ui.MainMenuPage);
	}
	else
	{
	
		//Variable to know if subject name entered (if any) was enetered using the rules.
		bool subjecNameIsOk = true;
		//If the vector of faces is not empty, save faces (up to a maximum of 10).
		if (!facesForSaving.empty())
		{
			//If universal subject name was not selected, get text from text field.
			if (universalNameFlag == false)
			{
				QString tempName = ui.subjectNameLabel2->text();
				//If the text field is not empty, get text.
				if (tempName.isEmpty() == false)
				{
					//Validate user input to follow same rules for subject name like the first time it was entered.
					if(verifySubjectName(tempName.toStdString()) == false)
					{
						//Verifies if the subject name has any special characters besides letters.
						//Initialization of a message box.
						QMessageBox aMessageBox;
						//Message Box will open and main window cannot be interacted with. The message box will have a set size that cannot be changed.
						aMessageBox.critical(0, "Error", "Subject name has to be characters only, without special characters or numbers.");
						aMessageBox.setFixedSize(500, 200);
						subjecNameIsOk = false;
					}
					else
					{
						subjectName = tempName;
						subjecNameIsOk = true;
					}
				}
			}
			if(universalNameFlag == true || (universalNameFlag == false && subjecNameIsOk == true))
			{
				//Save all faces detected, if their respective checkbox is checked and the subject name (if any) is correct.
				if (ui.checkBox->isChecked() && facesForSaving.size() >= 1)
				{
					aSubject.imageSize = facesForSaving[0].size();
					imwrite(createCSVimageFilePath(), facesForSaving[0]);
				}
				if (ui.checkBox_2->isChecked() && facesForSaving.size() >= 2)
				{
					aSubject.imageSize = facesForSaving[1].size();
					imwrite(createCSVimageFilePath(), facesForSaving[1]);
				}
				if (ui.checkBox_3->isChecked() && facesForSaving.size() >= 3)
				{
					aSubject.imageSize = facesForSaving[2].size();
					imwrite(createCSVimageFilePath(), facesForSaving[2]);
				}
				if (ui.checkBox_4->isChecked() && facesForSaving.size() >= 4)
				{
					aSubject.imageSize = facesForSaving[3].size();
					imwrite(createCSVimageFilePath(), facesForSaving[3]);
				}
				if (ui.checkBox_5->isChecked() && facesForSaving.size() >= 5)
				{
					aSubject.imageSize = facesForSaving[4].size();
					imwrite(createCSVimageFilePath(), facesForSaving[4]);
				}
				if (ui.checkBox_6->isChecked() && facesForSaving.size() >= 6)
				{
					aSubject.imageSize = facesForSaving[5].size();
					imwrite(createCSVimageFilePath(), facesForSaving[5]);
				}
				if (ui.checkBox_7->isChecked() && facesForSaving.size() >= 7)
				{
					aSubject.imageSize = facesForSaving[6].size();
					imwrite(createCSVimageFilePath(), facesForSaving[6]);
				}
				if (ui.checkBox_8->isChecked() && facesForSaving.size() >= 8)
				{
					aSubject.imageSize = facesForSaving[7].size();
					imwrite(createCSVimageFilePath(), facesForSaving[7]);
				}
			}
		}
	}
}

void FaceDetectionApp::receiveSaveAllFaces()
{
	bool ok;
	//Open a dialog window to get number of seconds to save faces.
	int i = QInputDialog::getInt(this, tr("Enter the number of seconds to record. NOTE: faces will be recorded while webcam is activated by this application."), tr("Seconds: "), 3, 1, 10, 1, &ok);

	if (ok)
		emit sendSaveAllFaces(i);
}

void FaceDetectionApp::receiveDisableEverythingError()
{
	ui.StartStreamBtn->setText("!");
	ui.StartStreamBtn->setEnabled(false);
	ui.SaveAllFacesTimeBtn->setEnabled(false);
	ui.DetectFacesBtn->setEnabled(false);
	ui.SaveFacesBtn->setHidden(false);
}

///
///NON-NAVIGATION FUNCTIONS
///

void FaceDetectionApp::webcamStreamSetup()
{
	//Create full directory for CSV file.
	csvFileFullPath = folderDir.toStdString() + CSV_FILE_NAME;
	//Create/Open to verify CSV file.
	checkCSVfile();
	QPixmap emptyPixmap;
	ui.WebcamStreamLbl->setPixmap(emptyPixmap);

	//Set as disabled all buttons except start stream button.
	ui.SaveAllFacesTimeBtn->setEnabled(false);
	ui.StartStreamBtn->setEnabled(true);
	ui.DetectFacesBtn->setEnabled(false);
	ui.SaveFacesBtn->setHidden(true);

	ui.StartStreamBtn->setText(">");

	ui.subjectNameLabel2->setHidden(true);
	ui.subjectNameInstructionLbl->setHidden(true);
	ui.CheckboxScrollArea->setHidden(true);
	ui.CheckBoxInstructionLbl->setHidden(true);
	//Show folder directory and subject name.
	ui.showFolderPathLbl->setText(folderDir);
	ui.showSubjectNameLbl->setText(subjectName);
	//Thread and opencvWorker class object are initialized.
	thread = new QThread();
	opencvWorker *worker = new opencvWorker(this, folderDir.toStdString());
	//QTimer object is initialized so that thread can be called every n number of seconds.
	QTimer *timerTrigger = new QTimer();
	//Every second, the thread will be called.
	timerTrigger->setInterval(100);

	///THREAD CONNECTIONS

	//Every time the QTimer interval has passed, the worker will grab a frame.
	connect(timerTrigger, SIGNAL(timeout()), worker, SLOT(receiveGrabFrame()));
	//When setup has been emitted at the end of this function, videocapture setup will start.
	connect(this, SIGNAL(sendSetup(int, bool)), worker, SLOT(receiveSetup(int, bool)));
	//When the Start/Stop button has been pressed, the worker will react accordingly.
	connect(this, SIGNAL(sendToggleVideo()), worker, SLOT(receiveToggleVideo()));
	connect(ui.StartStreamBtn, SIGNAL(clicked(bool)), this, SLOT(receiveToggleStream()));
	//Everytime a frame from the webcam is sent from opencvworker, the label in the ui will receive it.
	connect(worker, SIGNAL(sendFrame(QImage)), this, SLOT(receiveFrame(QImage)));
	//If the detect faces button is pressed, got to showDetectFaces to emit signal to opencvWorker class.
	connect(ui.DetectFacesBtn, SIGNAL(clicked(bool)), this, SLOT(showDetectFaces()));
	connect(this, SIGNAL(sendShowDetectFaces()), worker, SLOT(receiveShowDetectedFaces()));
	//Signal is sent to stop webcam stream.
	connect(this, SIGNAL(sendStopStreaming()), worker, SLOT(receiveStopStreaming()));
	//OpenCVWorker sends the frame with the detected faces and the vector of faces, which are saved in this class.
	connect(worker, SIGNAL(sendDetectedFaceFrame(QImage, std::vector <cv::Mat>)), this, SLOT(receiveFaceVector(QImage, std::vector <cv::Mat>)));
	//This class receives the vector of face images when the button to Save All in a Time Frame is presssed.
	connect(worker, SIGNAL(sendFrameTimeFrame(std::vector <cv::Mat>)), this, SLOT(recieveFrameTimeFrame(std::vector <cv::Mat>)));
	//When the saveAllFacesTime button is pressed, send signal to opencvWorker class.
	connect(ui.SaveAllFacesTimeBtn, SIGNAL(clicked(bool)), this, SLOT(receiveSaveAllFaces()));
	connect(this, SIGNAL(sendSaveAllFaces(int)), worker, (SLOT(recieveSaveAllFacesTime(int))));
	//Disables all buttons on GUI because there was an error related to the webcam
	connect(worker, SIGNAL(sendSignalErrorOnStream()), this, SLOT(receiveDisableEverythingError()));

	//When the thread has been sent to quit, the webcam stream is stopped, and the thread is sent to be deleted later.
	connect(thread, SIGNAL(quit()), worker, SLOT(receiveStopStreaming()));
	connect(thread, SIGNAL(quit()), thread, SLOT(deleteLater()));

	//Timer is put to start, and connnected with the opencvWorker class with the thread.
	timerTrigger->start();
	worker->moveToThread(thread);
	timerTrigger->moveToThread(thread);
	//Thread has started.
	thread->start();
	//Webcam number is sent to opencvWorker class.
	emit sendSetup(webcamNumber, isBW);
}

void FaceDetectionApp::receiveFrame(QImage aFrame)
{
	//Frame is received and sent to be displayed.
	ui.WebcamStreamLbl->setPixmap(QPixmap::fromImage(aFrame));
}

void FaceDetectionApp::receiveFaceVector(QImage aFrame, std::vector <cv::Mat> facesVector)
{
	//Frame is sent to label to be displayed.
	ui.WebcamStreamLbl->setPixmap(QPixmap::fromImage(aFrame));
	//Face Vector is saved in global vector.
	facesForSaving = facesVector;
	//Checkboxes for saving faces are activated.
	enableFaceCheckboxes(facesForSaving.size());
}

bool FaceDetectionApp::DirectoryExists(const std::string& directory)
{
	//Verifies if directory exists.
	DWORD attribs = ::GetFileAttributesA(directory.c_str());
	if (attribs == INVALID_FILE_ATTRIBUTES) {
		return false;
	}
	return (attribs & FILE_ATTRIBUTE_DIRECTORY);
}

void FaceDetectionApp::checkCSVfile()
{
	//CSV file is opened and closed to check if CSV file exists or not. If it doesn't exist, CSV file is created.
	csvFile.open(csvFileFullPath);

	if (csvFile.is_open() == false)
	{
		csvFile.close();
		createCSVfile();
	}
	else
		csvFile.close();
}

void FaceDetectionApp::createCSVfile()
{
	//CSV file is created. 
	csvFile.open(csvFileFullPath, std::ios::out);
	if (csvFile.is_open() == false)
	{
		//Initialization of a message box.
		QMessageBox aMessageBox;
		//Message Box will open and main window cannot be interacted with. The message box will have a set size that cannot be changed.
		aMessageBox.critical(0, "Error", "CSV File couldn't be created/opened 1!");
		aMessageBox.setFixedSize(500, 200);
	}

	csvFile.close();
}

void FaceDetectionApp::insertIntoCSVfile(std::string filePath)
{
	//CSV file is opened to insert file path and image file data into it.
	csvFile.open(csvFileFullPath, std::ios::app);
	if (csvFile.fail() == false)
	{
		csvFile << filePath + '\n';
	}
	else
	{
		QMessageBox::information(NULL, "ERROR", "Could not write into CSV file.");
	}
	csvFile.close();
}

std::string FaceDetectionApp::getSubjectNameFromPath(std::string linePath)
{
	//Char variable to go through string.
	char character;
	//Start and end points of substring.
	int startP, endP;
	//This protects from the variable getting another false end point to the string.
	endP = -5;
	//String that will contain subsequent substring.
	std::string resultStr;

	//Loop for going through every character in linePath. 
	//We'll look for the characaters '_' (subject number comes after) and '/' or '\' (folder paths come before that).
	//String in between is taken and returned.
	for (int x = (linePath.size()-1); x > 0; x--)
	{
		//Sub character is taken from string.
		character = linePath[x];
		//Character comparison...
		if (character == '_' && endP == -5)
			endP = x;
		//Character comparison...
		if (character == '/' || character == '\\')
		{
			startP = x + 1;
			//Substring is constructed and we break from loop.
			resultStr = linePath.substr(startP, (endP - startP));
			break;
		}
	}
	//Return results.
	return resultStr;
}

int FaceDetectionApp::getSubjectNumberFromPath(std::string linePath)
{
	//Char variable to go through string.
	char character;
	//Start and end points of substring.
	int startP, endP;
	//This protects from the variable getting another false end point to the string.
	endP = -5;
	//String that will contain subsequent substring.
	std::string resultStr;

	//Loop for going through every character in linePath. 
	//We'll look for the characaters '.' (file type comes after) and '_' (subject name comes before).
	//String in between is taken and returned.
	for (int x = (linePath.size() - 1); x > 0; x--)
	{
		//Sub character is taken from string.
		character = linePath[x];
		//Character comparison.
		if (character == '.' && endP == -5)
			endP = x;
		//Character comparison.
		if (character == '_')
		{
			startP = x + 1;
			//Substring is constructed and we break from loop.
			resultStr = linePath.substr(startP, (endP - startP));
			break;
		}
	}
	//Return results.
	return std::stoi(resultStr);
}

std::string FaceDetectionApp::createCSVimageFilePath()
{
	//Information from CSV file is read and inserted into struct object.
	getCSVfileInformation();
	std::string resultStr, CSVString;
	//Subject number, image width and heigth are converted to be inserted into the string.
	std::stringstream ss, nWidth, nHeight;
	ss << aSubject.number;
	nHeight << aSubject.imageSize.height;
	nWidth << aSubject.imageSize.width;
	//String to be inserted into CSV file and to save image is created.
	resultStr = aSubject.folder + aSubject.name + '_' + ss.str() + '.' + aSubject.type;
	CSVString = resultStr +" 1 0 0 " + nWidth.str() + ' ' + nHeight.str();
	//String is inserted into CSV file.
	insertIntoCSVfile(CSVString);
	//Resulting string is returned.
	return resultStr;
}

void FaceDetectionApp::recieveFrameTimeFrame(std::vector <cv::Mat> facesVector)
{
	if(DirectoryExists(folderDir.toStdString()) == false)
	{
		//Initialization of a message box.
		QMessageBox aMessageBox;
		//Message Box will open and main window cannot be interacted with. The message box will have a set size that cannot be changed.
		aMessageBox.critical(0, "Error", "Folder for images and CSV file can't be reached! Returning to main menu.");
		aMessageBox.setFixedSize(500, 200);
		
		//Changes current page to Main Menu Page.
		ui.StackW->setCurrentWidget(ui.MainMenuPage);
	}
	else
	{
		//Information from CSV file is read and inserted into struct object.
		getCSVfileInformation();
		std::string resultStr;
		std::stringstream ss;
		int aSize = facesVector.size();
		QProgressDialog progress("Saving Faces...", "Cancel", 0, aSize, this);
		progress.setWindowModality(Qt::WindowModal);
		
		//Strings are created for each image to be saved.
		for (int x = 0; x < facesVector.size(); x++)
		{
			progress.setValue(x);
			if (progress.wasCanceled())
				break;
			ss << aSubject.number;
			resultStr = aSubject.folder + aSubject.name + '_' + ss.str() + '.' + aSubject.type;
			//Image is saved.
			imwrite(resultStr, facesVector[x]);
			//Line is inserted into CSV file.
			insertIntoCSVfile(resultStr);
			aSubject.number++;
			ss.str(std::string());
		}
		progress.setValue(facesVector.size());
	}
}

void FaceDetectionApp::getCSVfileInformation()
{
	//Subject name is entered into struct object.
	aSubject.name = subjectName.toStdString();
	//Number is calculated from CSV file.
	aSubject.number = calculateSubjectNumber();
	//Folder directory is inserted into struct object.
	aSubject.folder = folderDir.toStdString();
	//Image file type is inserted into struct object.
	aSubject.type = imageFileType;
	
}

int FaceDetectionApp::calculateSubjectNumber()
{
	//Subject number is found by finding all image file paths in CSV file with same
	//subject name, and finding their number and adding one to it. If not other
	//subjects are found, one is used for this subject.
	bool isfound = false;
	if (fileIsEmpty() == false)
	{
		int countMax = 1;

		csvFile.open(csvFileFullPath, std::ios::in);
		if (csvFile.fail() == false)
		{
			char delimChar = '\n';
			std::string aLine;			

			while (getline(csvFile, aLine, delimChar))
			{
				if (getSubjectNameFromPath(aLine) == aSubject.name)
				{
					countMax = getSubjectNumberFromPath(aLine);
					isfound = true;
				}
			}
			if(isfound == true)
				countMax++;

			csvFile.close();
			return countMax;
		}
		else
		{
			//Initialization of a message box.
			QMessageBox aMessageBox;
			//Message Box will open and main window cannot be interacted with. The message box will have a set size that cannot be changed.
			aMessageBox.critical(0, "Error", "CSV File couldn't be opened!");
			aMessageBox.setFixedSize(500, 200);
			
			csvFile.close();
			return 1;
		}
	}
	else
	{
		csvFile.close();
		return 1;
	}
}

bool FaceDetectionApp::fileIsEmpty()
{
	//CSV file is checked to see if it is empty.
	csvFile.open(csvFileFullPath);
	if (csvFile.is_open() == true)
	{
		//End of file is reached to see the size of the document.
		csvFile.seekg(0, csvFile.end);
		int length = csvFile.tellg();
		//If CSV file is empty, return true.
		if (length == 0)
		{
			csvFile.close();
			return true;
		}
		else
		{
			csvFile.close();
			return false;
		}
	}
	else
	{
		//Initialization of a message box.
		QMessageBox aMessageBox;
		//Message Box will open and main window cannot be interacted with. The message box will have a set size that cannot be changed.
		aMessageBox.critical(0, "Error", "CSV File couldn't be opened!");
		aMessageBox.setFixedSize(500, 200);
		
		csvFile.close();
		return true;
	}
}

void FaceDetectionApp::enableFaceCheckboxes(int vectorSize)
{
	//Depending on vector size, checkboxes are enabled.
	if (vectorSize >= 1)
		ui.checkBox->setEnabled(true);
	if(vectorSize >= 2)
		ui.checkBox_2->setEnabled(true);
	if(vectorSize >= 3)
		ui.checkBox_3->setEnabled(true);
	if(vectorSize >= 4)
		ui.checkBox_4->setEnabled(true);
	if(vectorSize >= 5)
		ui.checkBox_5->setEnabled(true);
	if(vectorSize >= 6)
		ui.checkBox_6->setEnabled(true);
	if(vectorSize >= 7)
		ui.checkBox_7->setEnabled(true);
	if(vectorSize >= 8)
		ui.checkBox_8->setEnabled(true);

}

void FaceDetectionApp::disableFaceCheckboxes()
{
	//All face checkboxes are disabled.
	ui.checkBox->setEnabled(false);
	ui.checkBox_2->setEnabled(false);
	ui.checkBox_3->setEnabled(false);
	ui.checkBox_4->setEnabled(false);
	ui.checkBox_5->setEnabled(false);
	ui.checkBox_6->setEnabled(false);
	ui.checkBox_7->setEnabled(false);
	ui.checkBox_8->setEnabled(false);
}

bool FaceDetectionApp::verifySubjectName(std::string name)
{
	//Validates subject name to know that only letters are contained within it.
	char aChar;
	bool okayString = true;
	//Loop through all characters in the string.
	for (int x = 0; x < name.size(); x++)
	{
		aChar = name[x];
		if (!std::isalpha(aChar))
			okayString = false;
		if (!okayString)
			break;
	}
	return okayString;
}
