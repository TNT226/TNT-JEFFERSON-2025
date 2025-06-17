#include <Servo.h>  // Include the Servo library to control servo motors

// Define pins for ultrasonic sensors
const int trigPin1 = 0, echoPin1 = 1;  // Sensor 1: trigger and echo pins
const int trigPin2 = 2, echoPin2 = 3;  // Sensor 2: trigger and echo pins

const int servoPin = 4;  // Pin for controlling the servo motor

// Motor control pins (H-bridge)
const int ENA = 2;       // Speed control pin (PWM)
const int IN1 = 0;       // Motor direction pin
const int IN2 = 1;       // Motor direction pin

// Servo angle definitions for different directions
#define LEFT 50          // Angle to turn left
#define CENTER 85        // Angle to go straight
#define RIGHT 121        // Angle to turn right

// Motor speed definitions
#define MAX_SPEED 200    // Normal forward speed
#define TURN_SPEED 230   // Speed when turning

// Distance threshold to decide when to turn
#define THRESHOLD 180    // If distance is greater than this, it's considered "clear"

// Delays used for turning
#define LEFT_DELAY 400   // Time needed to turn left
#define RIGHT_DELAY 322  // Time needed to turn right

#define COOLDOWN 160     // Wait time after turning to stabilize

Servo myServo;  // Create a servo object

unsigned long lastMeasurement = 0;     // Last time distance was measured
const int measurementInterval = 100;   // Time between measurements (ms)

int turnCount = 0;         // Counts how many turns have been made
bool isTurning = false;    // True if the robot is currently turning
unsigned long turnEndTime = 0; // Time when the cooldown ends

void setup() {
  Serial.begin(9600);          // Start serial communication for debug messages
  delay(300);                  // Allow time for Serial Monitor to initialize

  // Easter egg message printed once on startup
  Serial.println("================================");
  Serial.println("        Nico made this code      ");
  Serial.println("================================");

  pinMode(ENA, OUTPUT);        // Set motor speed pin as output
  pinMode(IN1, OUTPUT);        // Set motor direction pin as output
  pinMode(IN2, OUTPUT);        // Set motor direction pin as output

  pinMode(trigPin1, OUTPUT);   // Set trigger pin for sensor 1
  pinMode(echoPin1, INPUT);    // Set echo pin for sensor 1
  pinMode(trigPin2, OUTPUT);   // Set trigger pin for sensor 2
  pinMode(echoPin2, INPUT);    // Set echo pin for sensor 2

  myServo.attach(servoPin);    // Attach the servo motor
  myServo.write(CENTER);       // Point the servo straight ahead

  digitalWrite(IN1, LOW);      // Set motor direction forward
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, MAX_SPEED); // Start moving forward at normal speed
}

// Function to measure distance using an ultrasonic sensor
long measureDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);         // Clear the trigger pin
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);        // Send a 10 µs pulse
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);         // End the pulse

  // Measure echo time, convert to cm, return distance
  return pulseIn(echoPin, HIGH, 30000) * 0.034 / 2;
}

void loop() {
  unsigned long now = millis();  // Get current time

  // If turning and cooldown hasn't finished, skip this cycle
  if (isTurning && now < turnEndTime) {
    return;
  }
  // Cooldown finished, resume measurements
  else if (isTurning && now >= turnEndTime) {
    isTurning = false;
  }

  // Time to take a new measurement
  if (now - lastMeasurement >= measurementInterval) {
    lastMeasurement = now;

    // Measure distance from both sensors
    int distLeft = measureDistance(trigPin1, echoPin1);
    delay(5);  // Small delay between readings
    int distRight = measureDistance(trigPin2, echoPin2);

    // If both sides are blocked
    if (distLeft < THRESHOLD && distRight < THRESHOLD) {
      myServo.write(CENTER);  // Keep going straight
    }
    // If the right side is clear
    else if (distRight > THRESHOLD) {
      myServo.write(RIGHT);             // Turn right
      digitalWrite(IN1, LOW);           // Set motor forward
      digitalWrite(IN2, HIGH);
      analogWrite(ENA, TURN_SPEED);     // Increase speed for turning
      delay(RIGHT_DELAY);               // Time to turn
      turnCount++;                      // Count the turn
      isTurning = true;                 // Enter cooldown
      turnEndTime = millis() + COOLDOWN;
    }
    // If the left side is clear
    else if (distLeft > THRESHOLD) {
      myServo.write(LEFT);              // Turn left
      digitalWrite(IN1, LOW);           // Set motor forward
      digitalWrite(IN2, HIGH);
      analogWrite(ENA, TURN_SPEED);     // Increase speed for turning
      delay(LEFT_DELAY);                // Time to turn
      turnCount++;                      // Count the turn
      isTurning = true;                 // Enter cooldown
      turnEndTime = millis() + COOLDOWN;
    }
    // Default case: go straight
    else {
      myServo.write(CENTER);
    }

    // Stop the robot after 24 turns
    if (turnCount == 24) {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
      analogWrite(ENA, 0);
      while (true) { delay(1000); }     // Stay stopped forever
    }

    // Resume normal movement
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    analogWrite(ENA, MAX_SPEED);
  }
}
