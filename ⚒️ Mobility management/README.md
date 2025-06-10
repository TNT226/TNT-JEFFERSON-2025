# Mobility management

We chose an open Ackerman chassis for our vehicle, which allowed us to connect an Arduino board, an H-Bridge module, a Buck module, and a power source. This necessitated the use of two platforms, as a single platform would have made the car too long and exceeded the provided measurements. We are utilizing two platforms: the first, which came with the Ackerman chassis ordered online, and the second, a 3D-printed platform designed by us. This second platform can be screwed to the first using four metal pillars that were included with the purchased Ackerman chassis. On the first platform, we mounted the servo motor, a JGB37-520 motor, the Nihewo battery, and other components we designed and 3D-printed for the vehicle's mobility. The second platform houses an Arduino board with a motor shield, an H-Bridge module, a Buck module, two ultrasonic sensors, and a Pixycam, which is mounted on a 3D-printed stand of our design.

We selected the JGB37-520 motor for its considerable power and speed. This motor is secured by a 3D-printed bracket bolted to the bottom of the car. It features a gear that connects to another gear attached to the axle, which drives the rear wheels of the chassis.

We powered the system with an 11.1 V Nihewo battery. However, a buck voltage regulator was required because the battery voltage was too high for the servomotor's requirements. We specifically set the buck regulator to 7 V, as the servomotor's maximum voltage is 7.4 V. This same battery is also connected via cables to the H-bridge, which supplies power to both the Arduino board and the car's main propulsion motor. The H-bridge provides 12 V to the car's propulsion system and 5 V to the Arduino board. Consequently, the remaining accessories, the two ultrasonic sensors and the Pixycam, are connected directly to the Arduino board pins and programmed through it.

For steering, as previously mentioned, we are using a 20 kg·cm servomotor. This component was included with the Ackerman chassis we purchased. It will be connected to the Arduino to control the car's direction and to the Buck module to regulate the voltage flow.

For the main controller, we opted for an Arduino Uno board. The primary reason for this choice is its efficiency in programming the car and its accessories compared to other controllers. Additionally, the Arduino's programming language is C++, which is the language taught at our school.

Here is our scheme of conduction and direction of our robot:


<img src="scheme of conduction and direction.png" width="800">


# Build






|OTHER MATERIALS OUR ROBOT USES ARE:|Photo of each:|   


## Why did we chose all of these previous materials?



## Note:
Most of what we've described is integrated into our final robot. However, for our previous attempts and prototypes, we utilized largely the same materials, pieces, parts, and components. It's worth noting that since this is our second year competing, many of our prototypes are carried over from last year.

# Models






# Our 3D printers


## Adapter for the wheels


### (you can find the 3D model stl document in this folder)


## Green and red obstacles


### (you can find the 3D model stl document in this folder)

## Gears

### (you can find the 3D model stl document in this folder)

## As a final note, it is important to mention that, as you have read, although we did purchased an ackerman chasis, we still modificated the mayority of it, making it our own and unique proyect, meaning we did _`not`_ use any Standard Construction Kit "Off the shelf" to build our robot, like Lego. We designed and builded our own original and unique robot, with our own 3d printed parts and electrical components.

