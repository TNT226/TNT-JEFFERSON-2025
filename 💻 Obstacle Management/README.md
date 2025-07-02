# Obstacle management

In this directory you will find:
- the software we used to make our code
- all the code we used for our prototypes and the final robot
- our source code with detailed comments
- our pseudo code
- all the strategies our robot uses in order to complete the open challenge round and the obstacle challenge round
- our old and new flowchart diagram 

## Software

The software we used for coding and programming our robot, Kaboom, is _Arduino Integrated Development Environment (IDE)  _ application version: 2.3.2 in MacOS. Arduino uses a variant of the C++ programming language. The Arduino Integrated Development Environment or Arduino Software (IDE)  contains a text editor for writing code, a message area, a text console, a toolbar with buttons for common functions and a series of menus. It connects to the Arduino hardware to upload programs and communicate with them. We chose using this software not only because of its simplicity but because it what we learned in our school.


<img src="Arduino IDE 2.3.2.png" width="40000">

##  Pseudocode and strategy

A pseudocode is a representation of code used to demonstrate the implementation of an algorithm without actually doing so. It often acts as a rough draft of coding projects, and is written in an explainable manner to be understandable by programmers at any knowledge level. Meanwhile, a strategy, in this case, is our plan to achieve our goals during the challenges and rounds of the WRO 2024 future engineers competition. Here is our pseudo code and strategy explained in detailed for each round:


### Round 1:

This pseudocode outlines the operational logic for our robot, focusing on basic movement, obstacle avoidance, and lap tracking.

**Step 1: Initialization**

* Start the JGB37-520 motor.

* Begin moving the car straight forward.

* Initialize the turn counter to zero.

**Step 2: Continuous Movement and Obstacle Detection**

* Continue moving straight forward until an ultrasonic sensor detects a distance greater than the length between the black boards in the track.

**Step 3: Directional Adjustment Based on Proximity**

* **If the distance detected by an ultrasonic sensor is less than a predefined threshold from either side, the robot will initiate a turn (right or left).**

* **If the left wall is closer to the robot than the right wall:**

   * Turn the robot to the right side.

* **Else (if the right wall is closer to the robot than the left wall):**

   * Turn the robot to the left side.

**Step 4: Lap Tracking and Round Termination**

* **After the robot completes 12 turns (which signifies 3 laps):**

   * Stop the robot at its starting position.

   * End the round/challenge.

* **If the robot has not yet completed 12 turns (3 laps):**

   * Continue operating until all 3 laps are completed and the round/challenge ends.

### Round 2:
This pseudocode is the same as the one used for the first round. The only difference is that the rectangular box in the center is now moved slightly to either side of the track, but the underlying mechanism remains the same.

**Step 1: Initialization**

* Start the JGB37-520 motor.

* Begin moving the car straight forward.

* Initialize the turn counter to zero.

**Step 2: Continuous Movement and Obstacle Detection**

* Continue moving straight forward until an ultrasonic sensor detects a distance greater than the length between the black boards in the track.

**Step 3: Directional Adjustment Based on Proximity**

* **If the distance detected by an ultrasonic sensor is less than a predefined threshold from either side, the robot will initiate a turn (right or left).**

* **If the left wall is closer to the robot than the right wall:**

   * Turn the robot to the right side.

* **Else (if the right wall is closer to the robot than the left wall):**

   * Turn the robot to the left side.

**Step 4: Lap Tracking and Round Termination**

* **After the robot completes 12 turns (which signifies 3 laps):**

   * Stop the robot at its starting position.

   * End the round/challenge.

* **If the robot has not yet completed 12 turns (3 laps):**

   * Continue operating until all 3 laps are completed and the round/challenge ends.

### Round 3:
This pseudocode outlines the operational logic for our robot, integrating both obstacle avoidance with ultrasonic sensors and color-based navigation using the Pixy camera.

**Step 1: Initialize Robot and Begin Movement**
* Start the JGB37-520 motor.
* Begin moving the car straight forward.
* Initialize turn counter for special color detection to zero.

**Step 2: Continuous Sensor Readings**
* Continuously read data from both ultrasonic sensors to determine distances to surrounding walls.
* Continuously check the Pixy camera for color detection.

**Step 3: Color-Based Navigation (Prioritized)**
* **If the Pixy camera detects a Green obstacle:**
    * Turn the robot to the **left**.
* **If the Pixy camera detects a Red obstacle:**
    * Turn the robot to the **right**.
* **If the Pixy camera detects the Special (Magenta) color:**
    * Increment the turn counter (lap counter).
    * If the turn counter reaches 3 (meaning 3 laps are completed):
        * Stop the robot permanently (park in the magenta parking lot).
        * End the round/challenge.
    * If the turn counter has not reached 3, continue normal operation.

**Step 4: Ultrasonic-Based Obstacle Avoidance (When No Color Detected)**
* **If no color is currently detected by the Pixy camera:**
    * **If both ultrasonic sensors detect walls:**
        * Continue moving straight forward.
    * **If the left ultrasonic sensor detects open space (distance > 50 cm):**
        * Turn the robot to the **left**.
    * **If the right ultrasonic sensor detects open space (distance > 50 cm):**
        * Turn the robot to the **right**.
    * **If the distance detected by one wall is significantly closer than the other (e.g., one side is < 50 cm and the other is > 50 cm):**
        * If the **left wall** is closer to the robot than the right wall:
            * Turn the robot to the **right** (to move away from the left wall).
        * Else (if the **right wall** is closer to the robot than the left wall):
            * Turn the robot to the **left** (to move away from the right wall).

**Step 5: Repeat**
* Continuously repeat Steps 2, 3, and 4 until the round ends (e.g., 3 laps are completed or the challenge time expires).

------------------------------------------

In order to explain all of the above better, we designed a flowchart diagram, a visual representation that depicts our process, system, computer algorithm, and a brief summary of how our code of the robot works on the track. During our journey we created two flowcharts as you can see below. The difference between the two diagrams is that the old one wasn't a good flowchart and didn't completely follow all the rules of a flowchart diagram and didn't explained correctly how our code and process works, on the other hand, our new flowchart diagram, does follow all the rules and conditions of a new flowchart diagram and explains correctly how our code and process works.
 
(both diagrams were created entirely by us, TNT, using the smartdraw website: https://www.smartdraw.com/flowchart/flowchart-maker.htm)


|Our Old Flowchart Diagrams|
|--------------------------|
|1st Flowchart Diagramando Model|
|<img src="1st Old flowchart diagram TNT2024.jpeg" width="500">|
|--------------------------|
|2nd Flowchart Diagramando Model|
|<img src="2nd Old flowchart diagram TNT2024.jpeg" width="500">|

|Our New Flowchart Diagram|
|-----------|
|<img src="Oficial Flowchart Diagram 2025.png" width="5000">|


In this directory we uploaded all the codes we used both for our prototytpes and the final robot. All of this source codes contain detailed comments, so make sure to check them thoroughly!

Below you have a brief summary, pseudocode and strategies used in each indivual file and code:

## Code for First Round (Open challenge round)

This code is specifically designed for the first round, also known as the open challenge round, of the competition. To understand its functionality in detail, please refer to the file named "First Round Code.ino" located in the designated folder. Within that file, you will find not only the code itself but also a comprehensive pseudocode explanation, breaking down each line step by step.

## Code for Second Round (Obstacle challenge round)

This code works for the second round, if you want to know what it is about check the file in the folder that's named "Second Round Code.ino", since the detailed comments will tell you what it is about.


## Code for the servomotor and ultrasonic sensors:

The code "Code for the servomotor and ultrasonic sensors.ino" enables the coordinated operation of our robot's steering mechanism and its two ultrasonic sensors. Within this file, you will find not only the code itself but also a detailed explanation, complete with its corresponding pseudocode.

The mechanism operates as follows:

- If the robot detects that one side is more than 50 cm away, it moves in that direction.

- If the robot detects that one side is less than 50 cm away, it moves in the opposite direction.






