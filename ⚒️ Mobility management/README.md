# Mobility management

We chose a vehicle chassis that was open and that would allow us to have both an Arduino board, a protoboard and a power source connected, which is why it was necessary to create two floors because otherwise the car would be very long and would exceed the measurements provided. We made two floors with simple Lego structures and made some small adaptations to place our DC motor, place our battery and 3D printed our own piece to be able to mount the pixy camera.  

We chose a JGB37-520 motor, which provides the car with a lot of power and speed. This motor is held in place by a 3D-printed bracket bolted to the bottom of the car. The motor itself has a gear that connects to another gear attached to the chassis.

We ran an 11.1 V battery. However, we had to use a buck voltage regulator because the battery voltage was too high for the servomotor's voltage needs. We specifically set the buck regulator to 7 V, since the maximum servomotor voltage is 7.4 V. This same battery will also be connected to an H-bridge that will help us send power to the Arduino board and the car's main propulsion motor. The car is supplied with 12 V from the H-bridge, and 5 V to the Arduino board. Therefore, the last accessories, the two ultrasonic sensors and the PixyCam, would be connected directly to the Arduino board and programmed from there.

For steering, as mentioned above, we used a 20 kg x cm servomotor. This was already included with the chassis we purchased. This will be connected to the Arduino to control the car's direction.

For the main controller, we used an Arduino 1 board, which is more efficient than the Lego EV3. We are using the Arduino board because it is more efficient for programming the car and its accessories.


Here is our scheme of conduction and direction of our robot:


<img src="scheme of conduction and direction.png" width="800">


# Build






|OTHER MATERIALS OUR ROBOT USES ARE:|Photo of each:|   

PLA in the color gray and ABS inthe color black
<img src="ABS 3D printing filament color black .jpg" width="800">


## Why did we chose all of these previous materials?



## Note:


# Models



# 3D Scanner


# Our 3D printers


## Adapter for the wheels


### (you can find the 3D model stl document in this folder)

## Support for pixy with adapter for lego



### (you can find the 3D model stl document in this folder)

## Blue piece



### (you can find the 3D model stl document in this folder)

## Green and red obstacles


### (you can find the 3D model stl document in this folder)

## Beam frames 



### (you can find the 3D model stl document in this folder)

## Gears



### (you can find the 3D model stl document in this folder)

## Beam


### (you can find the 3D model stl document in this folder)

## As a final note, it is important to mention that, as you have read, we build Terreneitor from cero, meaning we did _`not`_ use any Standard Construction Kit "Off the shelf" to build our robot. We designed and builded our own original and unique robot, with our own diverse lego pieces and electrical components.

