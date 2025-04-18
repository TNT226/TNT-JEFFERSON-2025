# `TNT` - `KABOOM`

## About

This repository provides information and knowledge regarding the current progress, evolution, and development of our self-driving robot vehicle for the World Robot Olympian (WRO) 2025 competition in the category Future Engineers, which is build and coded by us.

## TNT & Kaboom - WRO 2025 Future Engineers

The name of our team is TNT, we chose this name because we will _explode_ the comptetition with our hard work and dedication! On the other hand, Kaboom is the name of our autonomous robot, build by using 3d printing and arduino together. We are a group of Venezuelan high schoolers who yearn to learn and be masters in robotics. TNT also have plenty of objectives like:

* Obtain expertise and mastery in robotics, engineering and self-driven robots.
* Learning how to cooperate and work as a team to solve problems with ingenious, imaginative, and creative solutions.
* Acquire knowledge regarding new and old technologies, information about eletronics, hardware, software, and more.
* Gain experience for opportunities or competitions that we might face in the future.
* Win the competition and enjoy the process through this exciting road!

TNT is form by three members :

  - Nicola Pasquale Simone Perdomo 16YO
  - Daniela Texeira 17 year old
  - Emiliana Raquel Guerrero Fermíns 16YO
  
One thing that defines us, TNT, is that unlike others, we _don't_ give up easily, we are determine to be the best and improve as much as possible, always looking for success and enjoying every part of the process. You can see this characteristic about us being really strong during "our journey, process and prototypes" below and in the `Older versions of our final robot` folder.

## Content

- `Pictures (Team and vehicle)`: contains photos of the final robot from different views and angles. And photos of us individually and in group.
- `Older versions of our final robot`: contains photos of our previous ideas and prototypes that eventually lead to the final design and robot, Kaboom.
- `Obstacle management`: contains the source code of the prototypes and the final robot with detailed comments, strategies, flowchart diagrams and pseudocode.
- `Videos`: contains links to our Youtube videos which show how our previous attempts turn out and function, and also how the final robot completes the challenges and more. 
- `Mobility management`: contains all the 3D printed models we used throught our journey, all the lego pieces, electrical components, and materials used in the final robot, a brief discussion regarding the vehicle chassis design/selection as well as the mounting of all components to the vehicle chassis/structure, and more.
- `Power and sense management`: contains power and sense management about the power source for the vehicle as well as the sensors required to provide the vehicle with information to negotiate the different challenges, the reasons for selecting various sensors and how they are being used on the vehicle together and a wiring diagram with BOM that includes all aspects of professional wiring diagrams.


## Materials and components

What is Kaboom made of? Terreneitor is made of pieces and blocks from a  aluminum alloy chassi and 3d printed parts from our 3d printer being the bambu lab p1s, while also using "ready to go" electrical components. We also used an Arduino board as our main controller, since this is what we learned in our school.

|THE LEGO PIECES OUR ROBOT USES ARE:|THE ARDUINO/ELECTRICAL COMPONENTS OUR ROBOT USES ARE:|                                                  
|-----------------------------|---------------------|
|6x Yellow 4265c|1x MicroServo 9g (SG90)|
|10x Gray 3713|1x Yellow 9V Geared Dc Motor|
|33x Black 2780|1x Gray 5V Dc Motor|
|1x Red 6538c|1x Pixycam 2.1|
|1x Gray 60483|2x Ultrasound sensors|
|2x White x346| Arduino cables |
|2x Red 44809|2x Bateries|
|2x Black 32270|1x Arduino Uno Board|
|1x Blue 32523|1x Protoboard|
|1x Gray 32523|
|4x Gray 32073|
|1x Black 33299|
|4x Gray 32140|
|1x Gray 44294|
|2x Black 3707|
|2x Gray 48989|
|4x Dark gray 3648|
|4x White 40490|
|5x Gray 40490|
|6x Gray 64179|
|4x Grey 56908|
|4x Black 41897|

<img src="⚒️ Mobility management/⚙️ Lego structure: construction step-by-step of our final robot/Lego pieces our robot uses.png" width="800">

### To know the complete list of all the materials used visit the `Mobility management` folder.

## Our journey, progress and prototypes

In the beginning of our journey, we had plenty of various and diverse ideas on how to build our robot but eventually it all worked out. When we first started, we did messy sketches and tried a lot of ideas. Here are some of our first sketches and ideas for Terreneitor:

<img src="🏎️ Older versions of our final robot/First sketches 1.jpeg" width="500"><img src="🏎️ Older versions of our final robot/First sketches 2.jpeg" width="300">

Eventually, with these sketches in mind, we started working on the physical robot. We had high hopes for our first prototype, and the more we worked on it, the more our hopes grew. But, there was a problem, a big one...if you see "First prototype wheels mechanism" (you can find in the `videos` folder) you might think, like us, that it would be super fast on the ground, however when we finally were ready to put it to the test... it failed. The wheels mechanism of this prototype did not work on the ground. We tried to change many things and pieces in this prototype to see if it would help, but all our work was in vain, the mechanism still did not work on the floor. Eventually, we find out the cause... the mechanism didn't work because the dc motor that we were using, eventhogh it was fast, it didn't have enough strength and power to move the gear mechanism (the robot was also really tall and heavy causing the dc motor to be carrying this weight all the time, since it was located on the lower part of it. Let's not forget to comment that, also the mechanism for the direction of the robot did not work out too because the motor couldn't move the mechanism (for a better visual understanding visit the `videos` folder), although that was a minor problem compare to the wheel mechanism problem.

But, not everything went wrong with our first prototype because we also did a circuit for the servomotor and for the wheels, and we had a base (constructed by us with lego). All of this things helped us, along with our previous mistakes, to improve and create our second prototype.

In our second prototype, since we learned from our failures and errors from the past prototype, it didn't had any enormous problem, however, there were still problems to be fixed. We realized that the two dc motors we had weren't working simultaneously, which violated the rules of the WRO 2024 competition and also that, eventhough the mesurements of the robot were good according to the rules, it was still, to big in width, which lead to problems like being too heavy so it went super slow (which you can see in the video "Second prototype on the track" in the `videos` folder). And a third
problem was that when we building this prototype was that it did not direct the robot correctly because the wheels of the front couldn't rotate to either left or right. 

As you can realize by now we had plenty of problems since the beginning, let's gather all of them:

### First prototype:

- The wheels mechanism did not work on the ground
- The direction mechanism did not work
- Heavy
- Tall

### Second prototype:

- The mechanism we were using for the wheels violated the rules of WRO 2024 competition
- Too big in width
- Too heavy
- Slow, due to the two previous problems
- Didn't direct the robot correctly
  
### Third prototype:

- The mechanism wasnt consist
- Low voltage on motor
- Problems on turns
- Didn't detect colors right
  
### *(to learn more about our sketches and prototypes go to the `Older versions of our final robot` folder)*

### Final robot

Journies have downsides and good times, advantages and disavantages. After the first and second prototype you might think that because of all this problems we might give up, but contrary to this hypothesis, we didn't (after all "third time's a charm", right?), instead we improved and our mistakes made us stronger, wiser and smarter. So when we created our final robot, we made sure to not make any of our previous mistakes, being very causious in its construction. Thanks to this, we have a robot that is:

- Light weighted
- Short and thin
- The direction and wheel mechanism do work
- Fast
- Solid chassis
- 3d printed parts on ABS
- Doesn't violate any rules of the WRO 2025 competition.
  

  




