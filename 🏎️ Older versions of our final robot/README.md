 # Prototypes and sketches 

In this directory you will find all the information regarding our previous ideas and prototypes, their avantages and disavantages and the journey that lead to this prototypes. It is important to mention that we are going to focus here on the sketches and prototypes, not on the final robot (if you want to know more about our final robot, check the other folders like:`vehicle photos` folder, the `build` folder, etc. You can also read the README of this repository since we mainly talk about our final robot there and , as mentioned before, in the other folders except for this one).

- Now, _why is there a need to talk especifically about our sketches and prototypes?_

It is a need and an importance to talk about our sketches and prototypes because they have lead the way and gave us an incredible help for our final robot. They have shaped the way our final robot is today. It is important to have this in mind because, if you read "Our journey, progress and prototypes", you will see how it was a journey that started with a lot of downfalls but eventually we realized to learn from our mistakes and we recovered, making Terreneitor, our final robot.

## Sketches

Before we even started building the robot, we had a clear vision for what we wanted our robot to be like. We wanted a robot with 2 or 3 ultrasonic sensors (especially 2 in the front), the pixycam in the middle of the front of the robot (between the 2 ultrasonic sensors), to have 4 wheels (2 in the front, and 2 in the back like a real car), use 1 dc motor to move both back wheels, and have the batteries and arduino board behind the sensors (in the middle of the base). In the sketches below you can see these ideas reflected:

<img src="First sketches 1.jpeg" width="600">     <img src="First sketches 2.jpeg" width="300">

## First prototype

After making the sketches for what we wanted our robot to look like, we started the construction by using lego pieces from the _MINDSTORMS education EV3_ lego set. As mentioned before, we wanted the both of the back wheels to move by using 1 dc motor who would move them simultaneously. 

### Step 0.1: 

In the beginning, we made the base really long, as you can see in the image below, but if you watch closely, you'll see at the end of the robot, the mechanism for the wheels which is mainly made by using gears (if you want to see how this mechanism works check the `videos` folder). On the other hand, in the front of the robot you'll see the direction mechanism which we later changed.

<img src="First prototype step 0.1.jpeg" width="300">

### Step 1:

After realizing it was too long, we shorten it as you can see in the photo below. You can also see the direction mechanism more clearly and see how we connected the dc motor to the wheels mechanism (when the motor was on, it moved the gray lego adapter who moved the gears and finally made the wheels move in unison, at the same time (this wheel mechanism didn't work on the ground because the dc motor didn't have enought strength and power to move the mechanism, plus the weight of all the robot was on top of it).

<img src="First prototype step 1 (cenital view).jpeg" width="300">

### Step 2:

In step 2, we changed the direction mechanism of the robot, opt in for a gear-based mechanism. You can also see how in this mechanism to move the gear we were using a dc motor instead of a servomotor.

<img src="First prototype step 2 (cenital view).jpeg" width="300">

### Step 3:

Here, you can see the direction mechanism mentioned in step 2 more clearly, this mechanism was supposed to work like this: The big gear moved the black piece below, making it go to either side. This mechanism, did not work (as you can see in the `videos` folder) because the gear wasn't strong enough to move the black piece, and another problem with this mechanism was that since we were using a dc motor instead of a servomotor it would move only to one side. You can also see how tall and big it has making it really heavy.

<img src="First prototype step 3 (front view).jpeg" width="300">

### Step 4:

In step 4, you can see the wheels mechanism from below the robot, you can see the gears, dc motor, and everything that belongs to this mechanism. 
You can also see the direction mechanism from below. And that we were using two small wheels in the front, and two bigger ones in the back.

<img src="First prototype step 4 (worm’s-eye view).jpeg" width="300">

### We learned many things from this prototype:

- It was heavy
- It was tall and big
- To not used a gear based direction mechanism
- Use a servomotor in the direction mechanism instead of a dc motor
- To use a simplier and light weight wheel mechanism so the dc motor can can power and make move on the ground

## Second prototype

After we realized all the big problems our first prototype had, we decided to start again and build another prototype.

In the two pictures below, you can see how we applied our inical ideas we thought in the sketch: putting 2 ultrasonic sensors in the front of the robot and in between the pixycam. But if you see closely, you will see that it had no servomotor nor direction mechanism. So when the robot had to turn, one motor would be turn off and the other one will still be on, making it turn and they it would straight in a line and both motors will be turned on (if you want to know more about how this works check the `code` folder)

<img src="Second prototype (frontal view).jpeg" width="400"> <img src="Second prototype (another front view).jpeg" width="400">

However, there was another problem, in the two images below you can see that for this prototype we had two dc motors, each one working for each wheel, but this violated the rules of the WRO 2024 competition so we had to change it eventually. You can also see the cicuit and how wide and big it was, which lead to the robot being very slow (you can see this in the `videos` folder)

<img src="Second prototype (back view).jpeg" width="400" height="600"> <img src="Second prototype (cenital view).jpeg" width="400">

### We learned many things from this prototype:

- It was still heavy
- It was very wide
- To obligatorily have a direction mechanism 
- To check and follow the rules of the WRO 2025 competition
- It was very slow

After all this prototypes, we came to a conclusion: 

- We needed a robot that is:
  - light weighted
  - thin and short
  - have a direction mechanism and use a servomotor in it
  - follows the rules of the WRO 2025 competition
  - has 1 dc motor who makes both wheels move simultaneously
  - Fast in speed

So with this in mind, we built our final robot, Terreneitor, who has all of this characteristics and more.

(As stated at the beginning of this directory, if you want to know more about our final robot, check the other folders like:`vehicle photos` folder, the `build` folder, etc. You can also read the README of this repository since we mainly talk about our final robot there and in the other folders except for this one).






