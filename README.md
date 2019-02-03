
  
 <p align="center">
  <img src="http://richardsondaniel.co.uk/KidsApp/img/english/animals/mouse.png"/>
</p>


#  <p align="center"> ProgramChoice</p>
"Simple program to let users choose between the two trackers -  developed for IISER (Indian Institutes of Science Education and Research)"

This program is merely a basic interface to allow a user to choose between the two underlying programs [PointTracker](https://github.com/RichardsonDaniel/PointTracker) and [ObjectTracker](https://github.com/RichardsonDaniel/ObjectTracker).

 -  **PointTracker** is a optcal flow solution for tracking mouse muscle movements through pre-recorded videos it includes three distinct modes of tracking; *Multipoint* (base set 1000 points) optical flow upon a scene, *UserPoint* optical flow with user positioning of upto 30 points and *MotionTrack* which tracks the source of motion within the scene. These each will output a coordinate (X:Y relating to pixel position) CSV file and a folder containing the post processed frames of the video.
 
 - **ObjectTracker** is a box traker solution for both muscle and scene tracking of a mice through pre-recorded videos it includes two tracking modes each with six modes of tracking:
 	 &nbsp;
	 - MIL
	 - KCF
	 - TLD
	 - MEDIANFLOW
	 - MOSSE
	 - CSRT
	 
	 &nbsp;
Tracking method once is *MultiObject* box tracking, this allows the user to predefine boxes around subject that the program will then track for the rest of the scene (The more boxes the longer the processing time). The second is *MidTracker*, this takes in one subject and tracks them in relation to the centre of the video scene reporting back as the subject is clsoing in on the centre and when they are central. These each will output a coordinate (X:Y relating to pixel position) CSV file and a folder containing the post processed frames of the video.

## Files:

### Dependencies: 


## Portable Usage:

<details><summary>Click here for screenshot walkthrough</summary>
<p>

## Opening menu:

Once the folder is open you will be greeted with the following file strcture, to run the over riding application run the .exe in this folder, if you already know which specific kind of tracker you need you can open either ObjectTrackerP or PointTrackerP and run their respective .exe's to keep the main menu sequence. If you are skipping the menu scroll down to the appropriate section for you.

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/1.PNG"/>
</p>
Once you have opened the .exe you will be greeted with this terminal where you can slect the kind of tracker you require.
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
 
 4. ***MotionTracking;*** This will load the video sequence in with a blue circle following the origin of motion closest to the top left of the frame, this is intended for tracking a single objects motion through a still frame.

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/point/p2.PNG"/>
</p>
This is the MultiPoint output window, this will automatically apply the 1000 points and start the video. From here you can clear the points and intialize them again with the sliders, reinitialise which will do both those commands on the same frame, or pause the video.  All outputs form when stopped or video is complete will appear in the OUTPUT folder.
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/point/p3Multipoint.PNG"/>
</p>
This is the UserPoint output window, you will be shown the first frame of your video from here you can place your points. Once you are finished placing press the pause slider to begin tracking this will then play through to the end of the video. Should oyu need to clear the points at any time you can use the clear slider, you can not however replace points as this will misplace the points tracking in the output folder. All outputs form when stopped or video is complete will appear in the OUTPUT folder.
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/point/p3Usepoint.PNG"/>
</p>
This is the MotionTracking output window, there are no controls for this scenarion the scene will simply  play through and the outputs will go to the OUTPUT folder.
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/point/p3Motion.PNG"/>
</p>

## OBJECT TRACKER:

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/object/o1.PNG"/>
</p>

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/object/o2.PNG"/>
</p>

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/object/o3.PNG"/>
</p>

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/object/o4Multi.PNG"/>
</p>

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/object/o4Multidrag.PNG"/>
</p>

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/object/o4Multirunning.PNG"/>
</p>

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/object/o4Middrag.PNG"/>
</p>

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/object/o4Midrunning.PNG"/>
</p>

</p>
</details>

## Authors and acknowledgment:

## License:
