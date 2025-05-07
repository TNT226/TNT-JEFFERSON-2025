# Mobility management

We chose a vehicle chassis that was open and that would allow us to have both an Arduino board, a protoboard and a power source connected, which is why it was necessary to create two floors because otherwise the car would be very long and would exceed the measurements provided. We made two floors with simple Lego structures and made some small adaptations to place our DC motor, place our battery and 3D printed our own piece to be able to mount the pixy camera.  

We chose a 3V DC motor, which is one of the most common, but seeing that it did not have enough power, we worked with the “large gear-small gear” principle (to increase the speed of the output the driver gear is larger than the driven gear which is small (this will increase the speed of the output but decrease the “torque”)), which is what you will see in the diagram of the gear box and our propulsion, then with that engine, we simply place gears at the end of it, to double what is the angular speed and the linear speed that is generated on what are our rear wheels. That generates a little instability if we do it with a single gear, therefore we place two gears on each side, not to generate more power, but to generate more stability. 

We are working with 5000 mA batteries that are commercially known as “powerbanks” precisely because they give a stable current through a USB cable that will not bend or break and will allow us to constantly power our vehicle, we also use four rechargable batteries of around 2300-1300 mA each, to power our robot. (to see this explained in more detail check the `power and sense  management` folder)

For the direction, we had to use a servomotor, it would have been ideal to place another 3V DC motor for this function, however, we would have had to work a lot with the voltage variations to have to make the change between forward and backward, that would require an additional integrated chip which would congest too much work for us on a physical level, therefore we placed a servomotor to work directly with the code which would allow us 90 degree rotations to the right and to the left and This is attached directly to a simple connection shaft and is what gives us mobility to the left and right of our vehicle. 

For the main controller, we are using an Arduino Rev3 Board, this is because as we mentioned in our introduction, we are high schoolers, and in our school we learned how to use this board. And also that the final proyect for our seniors in robotics is the "Smars" proyect, which is about constructing a autonomous robot (of course, this robot does nothing similar to the goals and purposes of this competition, but it inspire and gave motivation for this category). Not only that, but an Arduino board is easier to learn than other boards and controllers.

Here is our scheme of conduction and direction of our robot:


<img src="scheme of conduction and direction.png" width="800">


# Build






|OTHER MATERIALS OUR ROBOT USES ARE:|Photo of each:|                                                  


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

