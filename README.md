
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


## Installation:

<details><summary>CLICK ME</summary>
<p>

## Usage:

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/1.PNG"/>
</p>
TEST
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/2.PNG"/>
</p>
TEST
 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/3.PNG"/>
</p>

### POINT TRACKER:

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/point/p1.PNG"/>
</p>

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/point/p2.PNG"/>
</p>

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/point/p3Motion.PNG"/>
</p>

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/point/p3Multipoint.PNG"/>
</p>

 <p align="center">
  <img src="http://richardsondaniel.co.uk/EggDrop/TrackerScreenshots/point/p3Usepoint.PNG"/>
</p>

### OBJECT TRACKER:

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
