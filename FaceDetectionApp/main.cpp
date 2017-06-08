/*
	PROGRAM FOR FACE DETECTION AND FACE DATABASE BUILDING

	Anibal J. Robles Perez
	Dra. Eliana Valenzuela-Andrade

	University of Puerto Rico at Arecibo

	--------------------------------------------------------

	>>>>>TODO: 
		
		-WHEN CHOOSING FOLDER, SAVING FACE, GO BACK, AND THEN NEXT TO DETECT FACES, ONLY THE WARNING FOR OPENING CSV FILE POPS UP. HAS TO HAVE SAFETY EVERYTIME THAT NEXT BUTTON IS PRESSED.
		MOVE CHECK DIRECTORY EXISTS TO NEXT BUTTON INSTEAD OF CHOOSE FOLDER BUTTON PRESSED.


		-MAKE VERSION WHERE THREAD IS LOCAL!: Avoid exceptions and memory leaks,etc.
		

		-Verify label content: if the webcam stream label is empty (has no frame) detect faces button is enabled. If there are no faces detected in frame, show
			message box that says so and hints. 
		
		-Settings page: add settings page that lets the user use face detection while webcam stream is opened. Warn user of CPU cost. Verify this is possible on faster computers (UPRA labs).
		-Check OpenCV Face Matching: LEAVE FOR LAST PART. TAKES TOO MUCH TIME. (Use opencv's gender identification tutorial?) <- No solution.  (Use openbr or opencv SURF?)
		
		SOLVED     -Create algorithms: when to verify if folder exists, when to save the images, when and how to send the data
		SOLVED     -Destructor fix:   destructor deletes thread. Thread may not be initialized at the beginning of the program.
		SOLVED     -Test how to draw on screen: Check how face detection draws on screen, but writing text on top of it dynamically.
		SOLVED     -Save all faces in time frame: LEAVE FOR LATER. Do not show webcam stream as to not weight the CPU down. Notify the user of this and only show that faces are being saved and how
					much time is remaining. USE QINPUTDIALOG (for getting time), TIME.H (for looping in a time). USE Q PROCESSDIALOG (?) TO SHOW HOW MUCH TIME HAS PASSED AND HOW MUCH IS LEFT.
		SOLVED     -Change save face: OpencvWorker will send both the image (when showing the detected faces) and the vector. Pushing Save Faces will only call the default on_savefacebt_clicked function.
		SOLVED     -Check csv file subject info: the subject name saaved in global variable and folder directory is saved in struct object. Name is compared with CSV contents, and when a match 
			is found (if any), check the number at the end, get it and add one and add it to struct object.
		SOLVED     -Add safeguards for first time entering: in webcamstreamsetup(), it is called multiple times, so folderdir is added / multiple times and other similar things.


		SOVED    -Test Getting folder path: Use file explorer to get folder path and display on label.
		SOLVED    -Test QThread: How to integrate a QThread class in this application. Use MultiView test app for this.
			Check how QThreads work, how threads are handled with mutex locks and how this all worked again.
		SOLVED   -CREATE QOBJECT WORKER CLASS: just like in video and how to truly use qthreads, create worker class for face detection, and send results to label. 
			Create thread in qt gui class and send to worker class. CHECK HOW TO DO SAVING OF FACES.
		SOLVED  -Check how deconstructors work: QThread of face detection needs to call deconstructor when stopping video, 
			and constructor when starting again. Create new instance every time.
		SOVED 	-Create every UI element: create views, buttons, labels, and name all interactive ones with corresponding names.
			Write about all of them in header files for comprehension.
		SOLVED   -Test Changing labels: how to interact with labels; change label size for webcam stream, change text.
*/

#include "facedetectionapp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QCoreApplication::addLibraryPath("./");
	//A QApplication object is created.
	QApplication a(argc, argv);
	//An instance of the FaceDetectionApp class (and its ui) is created.
	FaceDetectionApp w;
	//Show ui.
	w.show();
	//Execute program.
	return a.exec();
}



/*
		------     LINKS USED IN THIS PROJECT:
	-HOW TO NAVIGATE TO FOLDERS AND GET DIRECTORY:https://msdn.microsoft.com/en-us/library/windows/desktop/bb776913(v=vs.85).aspx
												  https://msdn.microsoft.com/en-us/library/windows/desktop/bb776914(v=vs.85).aspx
												  http://stackoverflow.com/questions/3490336/how-to-reveal-in-finder-or-show-in-explorer-with-qt
												  *http://doc.qt.io/qt-5/qfiledialog.html#details
												  *(qdir)http://doc.qt.io/qt-5/qdir.html#details
												  *(qdir to string)http://stackoverflow.com/questions/6297738/how-to-build-a-full-path-string-safely-from-separate-strings
												  ~http://stackoverflow.com/questions/5602798/how-to-launch-a-file-browser-in-a-qt-application
	-Opencv Mat Size:							  https://stackoverflow.com/questions/14028193/size-of-matrix-opencv
	-


*/