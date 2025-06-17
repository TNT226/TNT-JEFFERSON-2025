# Mobility management

We chose an open Ackerman chassis for our vehicle, which allowed us to connect an Arduino board, an H-Bridge module, a Buck module, and a power source. This necessitated the use of two platforms, as a single platform would have made the car too long and exceeded the provided measurements. We are utilizing two platforms: the first, which came with the Ackerman chassis ordered online, and the second, a 3D-printed platform designed by us. This second platform can be screwed to the first using four metal pillars that were included with the purchased Ackerman chassis. On the first platform, we mounted the servo motor, a JGB37-520 motor, the Nihewo battery, and other components we designed and 3D-printed for the vehicle's mobility. The second platform houses an Arduino board with a motor shield, an H-Bridge module, a Buck module, two ultrasonic sensors, and a Pixycam, which is mounted on a 3D-printed stand of our design.

We selected the JGB37-520 motor for its considerable power and speed. This motor is secured by a 3D-printed bracket bolted to the bottom of the car. It features a gear that connects to another gear attached to the axle, which drives the rear wheels of the chassis.

We powered the system with an 11.1 V Nihewo battery. However, a buck voltage regulator was required because the battery voltage was too high for the servomotor's requirements. We specifically set the buck regulator to 7 V, as the servomotor's maximum voltage is 7.4 V. This same battery is also connected via cables to the H-bridge, which supplies power to both the Arduino board and the car's main propulsion motor. The H-bridge provides 12 V to the car's propulsion system and 5 V to the Arduino board. Consequently, the remaining accessories, the two ultrasonic sensors and the Pixycam, are connected directly to the Arduino board pins and programmed through it.

For steering, as previously mentioned, we are using a 20 kg·cm servomotor. This component was included with the Ackerman chassis we purchased. It will be connected to the Arduino to control the car's direction and to the Buck module to regulate the voltage flow.

For the main controller, we opted for an Arduino Uno board. The primary reason for this choice is its efficiency in programming the car and its accessories compared to other controllers. Additionally, the Arduino's programming language is C++, which is the language taught at our school.

Here is our scheme of conduction and direction of our robot:


<img src="Scheme of Conduction and Direction.png" width="800">


# Build

In the chart below titled "THE "READY TO GO" ELECTRICAL COMPONENTS OUR ROBOT USES ARE:", you will find:

First, the amount of that especific piece we used on the robot
Second, the name of that "ready to go" electrical piece/component

|THE "READY TO GO" ELECTRICAL COMPONENTS OUR ROBOT USES ARE:|Photo of Each:|
|-----------------------------|---------------------|
|1x Gray 11.4V JGB37-520 Motor|<img src="Motor JGB37-520.jpg" width="200">|
|1x Pixycam 2.1|<img src="Pixycam.jpg" width="200">|
|2x Ultrasound sensors|<img src="Ultrasonic Sensor.png" width="200">|
|Many Arduino cables |<img src="Arduino Cables.png" width="200">|
|Many Alligator Cables|<img src="Alligator Cables.jpg" width="200">|
|1x Nihewo Batery 11.1V/7500mAh|<img src="Nihewo batery.jpg" width="200">|
|1x Arduino Uno Board|<img src="Arduino UNO.jpeg" width="200">|
|1x Arduino Shield Protoboard|<img src="Arduino Shield Protoboard .jpg" width="200">|
|1x H-Bridge Module|<img src="H-bridge module.JPG" width="200">|
|1x Buck Module|<img src="Buck Module.jpg" width="200">|
|1x Switch On-Off|<img src="Switch On-Off.jpg" width="200">|
|1x Servo Motor 7.4V|<img src="7.4 V Servo Motor.jpg" width="200">|



|OTHER MATERIALS OUR ROBOT USES ARE:|Photo of each:| 
|-----------------------------|---------------------|
|1x Yahboom DIY Smart Robot Chassis Ackerman Chassis|<img src="Ackerman Chassis .jpg" width="200">|
|1x Second Floor Platform 3d|<img src="Second Floor Platform.jpeg" width="200">|
|1x Carriage Axle Gear 3d|<img src="Carriage Axle Gear .jpeg" width="200"> |
|1x Motor Gear|<img src="Motor Gear.jpeg" width="200">|
|1x Motor Support 3d|<img src="Motor Support.jpeg" width="200">|
|1x Motor Support Stand 3d|<img src="Motor Support Stand.jpeg" width="200">|
|1x Axis 3d|<img src="Axis 3d stl" width="200">|

## Why did we chose all of these previous materials?
We chose all of these previous materials, components and pieces in our robot because is what we found in our robotics laboratory in school and it is what we are being taught.

Absolutely everything (the "ready to go" electrical components and the 3d printed parts) were bought, and in case of the 3d parts designed and printed, here in our country, Venezuela, except for the pixycam and the ackerman chassis which where imported from abroad.

## Note:
Most of what we've described is integrated into our final robot. However, for our previous attempts and prototypes, we utilized largely the same materials, pieces, parts, and components. It's worth noting that since this is our second year competing, many of our prototypes are carried over from last year.

# #Models:
Now, we will talk about all the information regarding our 3D printed models, designed and printed by us.

# Our 3D printers
It is important to mention that we own a Bambú Lab P1s 3d printer, which is a fundametal part in the creation of our robot.
|<img src="Lambú Labs P1s .jpg" width="300">|

## Green and red obstacles
This model counts with two pieces: the first one being red and the second one being green. This pieces help us practice for the second round (obstacle challenge).
|<img src="Obstacules.jpg" width="300">|

### (you can find the 3D model stl document in this folder)

## Gears
For the gears, we designed two models the Carriage Axle Gear and the Motor Gear, which are attached to the axis (that we also designed) and to the motor.
|Name of Gear:|Photo of each:| 
|-----------------------------|---------------------|
|Motor Gear|<img src="Motor Gear.jpeg" width="300">|
|Carriage Axle Gear|<img src="Carriage Axle Gear .jpeg" width="300">|

## As a final note, it is important to mention that, as you have read, although we did purchased an ackerman chasis, we still modificated the mayority of it, making it our own and unique proyect, meaning we did _`not`_ use any Standard Construction Kit "Off the shelf" to build our robot, like Lego. We designed and builded our own original and unique robot, with our own 3d printed parts and electrical components.

