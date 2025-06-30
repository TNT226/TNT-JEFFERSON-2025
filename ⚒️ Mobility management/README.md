# Mobility management

We chose an open Ackerman chassis for our vehicle, which allowed us to connect an Arduino board, an H-Bridge module, a Buck module, and a power source. This necessitated the use of two platforms, as a single platform would have made the car too long and exceeded the provided measurements. We are utilizing two platforms: the first, which came with the Ackerman chassis ordered online, and the second, a 3D-printed platform designed by us. This second platform can be screwed to the first using four metal pillars that were included with the purchased Ackerman chassis. On the first platform, we mounted the servo motor, a JGB37-520 motor, the Nihewo battery, and other components we designed and 3D-printed for the vehicle's mobility. The second platform houses an Arduino board with a motor shield, an H-Bridge module, a Buck module, two ultrasonic sensors, and a Pixycam, which is mounted on a 3D-printed stand of our design.

# About the Engine

We selected the JGB37-520 motor for our project due to its considerable power and high-speed performance, making it an ideal choice for efficiently driving our vehicle. After evaluating several motor options, we chose this model because it provides the right balance of torque and RPM to ensure smooth and reliable movement while maintaining energy efficiency. To mount the motor securely, we designed a custom 3D-printed bracket that holds it firmly in place at the bottom of the car’s chassis. This bracket was bolted down to prevent any unwanted vibrations or misalignment during operation. The motor is equipped with a gear mechanism that meshes with another gear connected to the rear axle, effectively transferring rotational force to the wheels. This direct-drive setup ensures optimal power transmission, allowing the rear wheels to propel the vehicle forward with consistent speed and control. The implementation was carefully tested to ensure proper gear alignment and minimal friction, maximizing the motor’s efficiency and longevity. Overall, the JGB37-520 motor, combined with our mounting solution and drivetrain design, provides a robust and reliable propulsion system for our car.

We powered the system with an 11.1 V Nihewo battery. However, a buck voltage regulator was required because the battery voltage was too high for the servomotor's requirements. We specifically set the buck regulator to 7 V, as the servomotor's maximum voltage is 7.4 V. This same battery is also connected via cables to the H-bridge, which supplies power to both the Arduino board and the car's main propulsion motor. The H-bridge provides 12 V to the car's propulsion system and 5 V to the Arduino board. Consequently, the remaining accessories, the two ultrasonic sensors and the Pixycam, are connected directly to the Arduino board pins and programmed through it.

For steering, as previously mentioned, we are using a 20 kg·cm servomotor. This component was included with the Ackerman chassis we purchased. It will be connected to the Arduino to control the car's direction and to the Buck module to regulate the voltage flow.

For the main controller, we opted for an Arduino Uno board. The primary reason for this choice is its efficiency in programming the car and its accessories compared to other controllers. Additionally, the Arduino's programming language is C++, which is the language taught at our school.

# Engineering Principles:

### **Horse Power**  
Power, as a fundamental engineering principle, determines the motor's capacity to perform work over time, and the JGB37-520 motor (12V) delivers 10-15W (0.013-0.02 HP) at rated speed—an optimal range for compact robotic applications that balances performance with energy efficiency. This power output enables the motor to overcome friction, inertia, and load resistance while maintaining consistent movement, crucial for our chassis's reliable operation. The motor's power curve reveals peak efficiency at 50-70% of maximum RPM (~130 RPM no-load speed), where it achieves the best mechanical-to-electrical power ratio, ensuring smooth acceleration and sustained motion.

The 12V supply voltage plays a key role in maintaining stable power delivery, preventing voltage sag under load while keeping the motor within safe thermal limits. Although modest in absolute terms, this power rating is carefully engineered to provide sufficient thrust without excessive bulk, thanks to its optimized power density (W/kg). Power is intrinsically linked to torque and RPM—while the motor's wattage ensures continuous operation, the gear system (when considered) efficiently transmits and amplifies this power to the wheels, preventing stalling or performance drops under resistance. Without adequate power management, the system would struggle with efficiency and heat dissipation, highlighting why the JGB37-520's balanced output is critical for long-term reliability in small-scale electromechanical applications.

### **Speed**  
Speed refers to how fast the motor’s output shaft rotates, measured in revolutions per minute (RPM), and directly impacts how quickly the car moves. The JGB37-520 motor provides a high RPM, which is then adjusted by the gear ratio to balance speed and torque. A higher gear ratio (more teeth on the driven gear) increases torque but reduces speed, while a lower ratio does the opposite. In our design, the gear connection between the motor and axle ensures an optimal balance—enough speed for swift movement while maintaining sufficient torque to prevent wheel slippage. Proper speed control is crucial for stability, especially when navigating turns or uneven surfaces.  

### **Torque (Rotational Force)**  
**Torque Characteristics and System Performance of the JGB37-520 Motor**  

The JGB37-520 motor (12V version) serves as the core of our propulsion system, delivering a rated torque of 0.7 kg·cm (0.068 N·m) under normal operation—a crucial rotational force that overcomes static friction, inertia, and drivetrain resistance to enable smooth acceleration from rest. When subjected to extreme loads, its stall torque peaks at 2.5 kg·cm (0.245 N·m), providing vital overload protection against sudden resistance spikes while preventing motor stalling. This torque capability ensures the chassis maintains motion despite friction and weight, particularly important when navigating inclines or during rapid acceleration.  

While the motor's modest power output (10-15W or 0.013-0.02 HP) might seem limiting, the system compensates through intelligent mechanical optimization. The gear reduction mechanism (where a smaller motor gear drives a larger axle gear) strategically converts excess RPM into multiplied torque, prioritizing usable force over raw speed. This mechanical advantage ensures the rear wheels receive optimized thrust without overburdening the motor, while the 12V power supply maintains an efficient balance between speed potential and torque delivery. The result is a responsive drivetrain where torque effectively handles challenging conditions like inclines and acceleration, while the carefully matched power output prevents energy waste—demonstrating how precise torque management is fundamental to electromechanical system performance. Without this careful equilibrium between torque generation and power application, the system would face efficiency losses and operational challenges under load.

### **Gear Mechanics (Power Transmission & Efficiency)**  
Gears are crucial for transferring power from the motor to the wheels while optimizing efficiency. In our design, the motor’s gear meshes with a larger gear on the axle, creating a speed reduction system that trades some RPM for increased torque. This mechanical advantage ensures smoother acceleration and better load handling. Additionally, the 3D-printed mounting bracket keeps the gears properly aligned, minimizing energy loss due to friction or misalignment. Efficient gear design reduces wear, improves battery life, and ensures reliable performance. Without an effective gear system, much of the motor’s energy would be wasted, leading to poor traction and sluggish movement.  

By carefully balancing power, speed, torque, and gear mechanics, our chassis achieves an efficient and reliable drivetrain, demonstrating key engineering principles in motion control and mechanical design.
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

|Printer:|Photo:| 
|-----------------------------|---------------------|
|Lambu Labs P1s|<img src="Lambu Labs P1s .jpg" width="300">|


## Green and red obstacles
This model counts with two pieces: the first one being red and the second one being green. This pieces help us practice for the second round (obstacle challenge).
|Object|Photo of each:| 
|-----------------------------|---------------------|
|Obstacules (Red and Green)|<img src="Obstacules.jpg" width="300">|

### (you can find the 3D model stl document in this folder)

## Gears
For the gears, we designed two models the Carriage Axle Gear and the Motor Gear, which are attached to the axis (that we also designed) and to the motor.
|Name of Gear:|Photo of each:| 
|-----------------------------|---------------------|
|Motor Gear|<img src="Motor Gear.jpeg" width="300">|
|Carriage Axle Gear|<img src="Carriage Axle Gear .jpeg" width="300">|

## Making Kaboom Step by Step:

|Step:|Photo of each step:| 
|-----------------------------|---------------------|
|Step 1: First, we cutted the Yahboom DIY Smart Robot Chassis Ackerman Chassis on half so that the lenghth was correct according to the rules.|<img src="Step 1.jpeg" width="300">|
|Step 2: Second, we designed and printed the motor stands, which we screwed to the back green stands.|<img src="Step 2.jpeg" width="300">|
|Step 3: Third, we attached the motor and the motor support.|<img src="Step 3.jpeg" width="300">|
|Step 4: Fourth, we assembled the axis and gears together with the motor.|<img src="Step 4.jpeg" width="300">|
|Step 5:Fith, we located the Nihewo batery.|<img src="Step 5.jpeg" width="300">|
|Step 6: Sixth, we screwed the second floor platform (that we designed and printed) at the top with help of four metal pillars that came with the Yahboom DIY Smart Robot Chassis Ackerman Chassis we purchased.|<img src="Step 6.jpeg" width="300">|
|Step 7: Lastly, we placed the "READY TO GO" electrical components and the stands for the ultrasonic sensors and pixy cam in the second floor platform.|<img src="Step 7.jpeg" width="300">|

## As a final note, it is important to mention that, as you have read, although we did purchased an ackerman chasis, we still modificated the mayority of it, making it our own and unique proyect, meaning we did _`not`_ use any Standard Construction Kit "Off the shelf" to build our robot, like Lego. We designed and builded our own original and unique robot, with our own 3d printed parts and electrical components.

