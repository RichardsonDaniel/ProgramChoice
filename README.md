

 <p align="center">
  <img src="http://richardsondaniel.co.uk/KidsApp/img/english/animals/mouse.png"/>
</p>


#  <p align="center"> ProgramChoice</p>

<p align="center">"Simple program to let users choose between the two trackers -  developed for IISER (Indian Institutes of Science Education and Research)"</p>

# 


This program is merely a basic interface to allow a user to choose between the two underlying programs [PointTracker](https://github.com/RichardsonDaniel/PointTracker) and [ObjectTracker](https://github.com/RichardsonDaniel/ObjectTracker). Both currently under private repos as they are still being developed, major updates will be pushed here.

 -  **PointTracker** is a optical flow solution for tracking mouse muscle movements through pre-recorded videos it includes three distinct modes of tracking; *Multipoint* (base set 1000 points) optical flow upon a scene, *UserPoint* optical flow with user positioning of upto 30 points and *MotionTrack* which tracks the source of motion within the scene and draw its path. These each will output a coordinate (X:Y relating to pixel position) CSV file and a folder containing the post processed frames of the video.
 
 - **ObjectTracker** is a box tracker solution for both muscle and scene tracking of mice through pre-recorded videos it includes two tracking modes each with six methods of tracking:
 	 &nbsp;
	 - MIL
	 - KCF
	 - TLD
	 - MEDIANFLOW
	 - MOSSE
	 - CSRT
	 
	 &nbsp;
Tracking mode one is *MultiObject* box tracking, this allows the user to predefine boxes around subject that the program will then track for the rest of the scene (The more boxes the longer the processing time). The second is *MidTracker*, this takes in one subject and tracks them in relation to the centre of the video scene reporting back as the subject is closing in on the centre and when they are central. These each will output a coordinate (X:Y relating to pixel position) CSV file and a folder containing the post processed frames of the video.

## Files:

[](https://emojipedia.org/file-folder/)
##### - 📁ProgramChoice
###### ProgramChoice is the folder containing the solution file and source files for the choice program.

[](https://emojipedia.org/file-folder/)
##### - 📁ProgramChoiceP
###### ProgramChoiceP is the folder containing portable executable for this program and should also hold the portble verison of PointTrakcer and ObjecTracker from which it runs. (See dependencies)
[](https://emojipedia.org/page-facing-up/)
##### - 📄 License.txt
###### Liscense is a text file holding the licensing information on the current project, currently  [GNU Affero General Public License v3.0](https://www.gnu.org/licenses/agpl-3.0.en.html)
[](https://emojipedia.org/page-facing-up/)
##### - 📄 README.txt
###### ReadME is the document you are currently reading holding usage and general information.



### Dependencies: 
The source code on this project is meant as a link between two tracking types, as such the portable version of both [PointTracker](https://github.com/RichardsonDaniel/PointTracker) and [ObjectTracker](https://github.com/RichardsonDaniel/ObjectTracker) (folders denoted with a P) is required in the main directory with the .exe for this program to run. If you require a single one of these tracker types but not the other you can visit their respective GitHub pages for their portable versions.

## Portable Usage:

 1. Load application
 2. Choose trakcer type, Point or Object
 3. Load in your video file, either drag onto terminal window or load from repo (video folder)
 4. Choose your tracker method, Point has three methods and Object has two
 5. Let the tracker run through the video sequence until you choose to stop it or the video ends
 6. The terminal and supporting windows will close when complete
 7. Gather your output CSV and processed frames from the OUTPUT folder. Beware to take out previous test files before running again as these will be overwritten

&nbsp;
<details><summary>Click here for screenshot walkthrough if you wish to use this on your own videos.</summary>
<p>

## Opening menu:

Once the folder is open you will be greeted with the following file structure, to run the overriding application run the .exe in this folder, if you already know which specific kind of tracker you need you can open either ObjectTrackerP or PointTrackerP and run their respective .exe's to skip the main menu sequence. If you are skipping the menu scroll down to the appropriate section for you.

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/1.PNG"/>
</p>
Once you have opened the .exe you will be greeted with this terminal where you can select the kind of tracker you require.
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/2.PNG"/>
</p>
This will then begin a loading sequence for your chosen tracker. Scroll ahead to your appropriate choice.
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/3.PNG"/>
</p>

## POINT TRACKER:
When the load sequence is complete you will be shown a new terminal window, this will read out the videos in the video folder (repo) which you can load by typing; video/name.filetype or if your video file is in an unprotected space you can simply drag it into the terminal and it will create a path itself.
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/point/p1.PNG"/>
</p>
Once a file is chosen you will be asked to choose a tracking type from the three available:

 1. ***MultiPoint;*** this will load a Lucas Kanade optical flow sequence with 1000 points being tracked all these points are chosen by the system on what it deems to be the best for the flow.
 
 2. ***UserPoint;*** this will also load a Lucas Kanade optical flow sequence however the point positions are determined by the user, left-click places yellow points (upto 10), right-click places red points (upto 10) and mouse wheel click places blue point (upto 10).
 
 4. ***MotionTracking;*** This will load the video sequence in with a blue circle following the origin of motion closest to the top left of the frame, this is intended for tracking a single objects motion through a still frame drawing their path as they go.

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/point/p2.PNG"/>
</p>

### 1) MultiPoint

This is the MultiPoint output window, this will automatically apply the 1000 points and start the video. From here you can clear the points and intialize them again with the sliders, reinitialise which will do both those commands on the same frame, or pause the video.  All outputs from when stopped or video is complete will appear in the OUTPUT folder.
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/point/p3Multipoint.PNG"/>
</p>

### 2) UserPoint
This is the UserPoint output window, you will be shown the first frame of your video from here you can place your points. Once you are finished placing press the pause slider to begin tracking this will then play through to the end of the video. Should you need to clear the points at any time you can use the clear slider, you can not however replace points as this will misplace the points tracking in the output folder. All outputs from when stopped or video is complete will appear in the OUTPUT folder.
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/point/p3Usepoint.PNG"/>
</p>

### 3) Motion
This is the MotionTracking output window, there are no controls for this scenario the scene will simply  play through and the outputs will go to the OUTPUT folder.
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/point/p3Motion.PNG"/>
</p>

## OBJECT TRACKER:
When the load sequence is complete you will be shown a new terminal window, you will be given the option to pull video from a video file or the primary webcam connected if applicable. If you choose webcam skip the next step.
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/object/o1.PNG"/>
</p>
The Terminal will then read out the videos in the video folder (repo) which you can load by typing; video/name.filetype or if your video file is in an unprotected space you can simply drag it into the terminal and it will create a path itself.
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/object/o2.PNG"/>
</p>
Once a file or camera is chosen you will be asked to choose a tracking type from the two available:

1.  _**MultiObject;**_  this will use a box chosen by the user to track as many subjects as desired as they travel throught the scene using the chosen tracking method. More boxes require more computation time.
    
2.  _**MidTracker;**_  this will track use a box chosen by the user to track a single subject in relation to the centre of the scene, displaying appropriate information as to its proximity to the centre.

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/object/o3.PNG"/>
</p>
From here you must choose your preffered tracking method. Each method reacts differently to different situations multiple tries may be needed to the method best matched to your subject case. In most scenarios in which we required it CSRT performed the best.
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/object/o4Multi.PNG"/>
</p>

### 1) MultiObject
You will be shown the first frame of your video. From here you can drag, with left-click, a box around your subject. If the box is in the correct location press spacebar, if you wish to try again press C, once you have placed as many boxes as you need press ESC to begin tracking. You can place as many boxes as you desire, however be aware that the higher the box count the higher the computation time for each frame.
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/object/o4Multidrag.PNG"/>
</p>
The tracker will then track the subjects location through the scene as they move, different trackers (i.e CSRT vs MEDIANFLOW) will handle this process differently if you do not get the desired output try another tracker or adjusting your selection box. Each box is labelled in the top left with an ID number this corresponds to its number in the CSV sheet, its current coordinates in each frame is also displayed. All outputs from when stopped or video is complete will appear in the OUTPUT folder.
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/object/o4Multirunning.PNG"/>
</p>

### 2) MidTracker
You will be shown the first frame of your video. From here you can drag, with left-click, a box around your subject. If the box is in the correct location press spacebar, if you wish to try again press C.
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/object/o4Middrag.PNG"/>
</p>
The tracker will then track the subjects location in relation to the centre of the scene, as the subject moves closer a box will appear to show it is in proxiity and when it is central the box will light red to show this. Coordinates of the centre of the subject box can be seen around the edge of the display.  All outputs from when stopped or video is complete will appear in the OUTPUT folder.
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/object/o4Midrunning.PNG"/>
</p>

</p>
</details>

## Author:
[Daniel Richardson](github.com/RichardsonDaniel): richardson.daniel@hotmail.co.uk


## License:

 [GNU Affero General Public License v3.0](https://www.gnu.org/licenses/agpl-3.0.en.html) © [Daniel Richardson](github.com/RichardsonDaniel)



