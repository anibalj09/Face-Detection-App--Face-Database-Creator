-----------------------------////////////////////////////////////////-----------------------------

FACE DETECTION APP;
FACE DATABASE CREATOR

by: Anibal J. Robles Perez, Dra. Eliana Valenzuela-Andrade.
University of Puerto Rico at Arecibo


---------- OBJECTIVE

The purpose of this application is dual-sided:

-> Easily create Face Databases for your Computer Vision projects.

-> Show different functions of OpenCV and Qt and how to integrate them into a same project.


---------- INTRODUCTION

This application is intended to help anyone who wants to build a face database make it faster by 
automating many steps that are normally done manually. The application detects faces in the webcam 
stream and allows the user to save them manually.


---------- HOW TO USE

BEFORE YOU BEGIN: Before you start, make sure you are running it on a computer with an integrated webcam, 
or have a webcam that can be connected to the computer. Make sure the webcam is functional before using it 
for this application.

1.  Press the Start Button.

2. Enter the folder directory where you want to save the images and CSV file in.
    NOTE: The folder has to be created or has to exist before choosing it in the application.

3. Enter the subject name for the first subject to be saved in the face database.
    NOTE: The subject name should ONLY have letters in it. Numbers or special characters ('-','_','.', etc.) 
    are not accepted.

4. Click the Next button to begin.

5. Press the '>' button to start the webcam stream.

6. When the webcam stream is running, press the 'Detect Faces' button to detect all faces in frame
    NOTE: Only a maximum of 8 faces in a frame can be saved to the face database. The faces have to face forward, 
    and not have artifacts that obstruct them (sunglasses, for example). Be conscious of lighting conditions: this 
    may affect the face detection accuracy. The face detector is not 100% accurate: it may detect false positives.

7. After the 'Detect Faces' button has been pressed, the webcam stream is stopped and all detected faces are shown 
   on the frame by drawing a circle around them. To save the faces, check the checkbox that corresponds to the face 
   and press the "Save Faces" button.

8. With the faces detected, press the "Save All Faces In A Time Frame" to save all faces that are detected in the time 
   frame (in seconds) that you want. 
   NOTE: The frames are not displayed so that it can work on most computers. In this version of the program, the loading
   notification box is not displayed, so there won't be any indications that the faces are being saved. Wait until the 
   time you chose passes to know it has ended (most integrated webcams have a light that turns on when the webcam is 
   active: this light will turn on when the face detection starts, and turn off when it has ended; which can be an 
   effective way of knowing it has ended). On tests, about one face is saved per second (if only one face is in frame).


----------APPENDIX

Tools used in this project:
	-Microsoft Visual Studios 2015
	-OpenCV 3.2.0 (pre-built)
	-Qt 5.8.0 w/ QtPackage 1.3.11 for Visual Studios.

Code tutorials used for reference in this project:
	-https://www.researchgate.net/publication/259584296_Tutorial_Creating_a_Cascade_of_Haar-like_Classifiers_Step_by_Step 
	-http://docs.opencv.org/2.4/modules/contrib/doc/facerec/facerec_tutorial. html  
	-http://codingexodus.blogspot.com/2012/12/working-withvideo-using-opencv-and-qt.html  
	-https://mayaposch.wordpress.com/2011/11/01/how-to-really-truly-useqthreads-the-full-explanation/  
	-http://blog.debao.me/2013/08/how-to-use-qthread-in-the-rightway-part-1/ 
	-https://www.youtube.com/watch?v=vKIEzqmeajQ&t=35s
	-http://docs.opencv.org/2.4/doc/tutorials/objdetect/cascade_classifier/casc ade_classifier.html
 

-----------------------------////////////////////////////////////////-----------------------------