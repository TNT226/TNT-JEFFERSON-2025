#include <Servo.h>

// Initialize servo object
Servo servo;

// Pin definitions
const int ServoPin = 3;       // Servo control pin
const int trigPin1 = 13;       // First ultrasonic sensor trigger
const int echoPin1 = 10;       // First ultrasonic sensor echo
const int trigPin2 = 12;       // Second ultrasonic sensor trigger
const int echoPin2 = 9;        // Second ultrasonic sensor echo

// Constants
const int SAFE_DISTANCE = 50;  // Distance threshold in cm
const int SERVO_LEFT = 155;     // Left position for servo
const int SERVO_RIGHT = 0;      // Right position for servo
const int SERVO_CENTER = 90;    // Center position for servo

void setup() {
  // Pseudocode:
  // BEGIN SETUP
  //   Attach servo to control pin
  //   Initialize serial communication
  //   Set trigger pins as outputs
  //   Set echo pins as inputs
  // END SETUP
  
  servo.attach(ServoPin);
  Serial.begin(9600);
  
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  
  // Center servo at startup
  servo.write(SERVO_CENTER);
}

float readUltrasonic(int trigPin, int echoPin) {
  // Pseudocode:
  // BEGIN READ ULTRASONIC DISTANCE
  //   Send 10μs pulse to trigger pin
  //   Measure echo pulse duration
  //   Calculate distance in cm
  //   Return distance
  // END READ ULTRASONIC DISTANCE
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH);
  return (duration / 2) / 29.1;  // Convert to cm
}

void checkLeftSensor() {
  // Pseudocode:
  // BEGIN CHECK LEFT SENSOR
  //   Read distance from left sensor
  //   Print distance to serial
  //   If obstacle detected beyond safe distance
  //     Wait 500ms
  //     Turn servo left
  //     Wait 800ms
  //     Return servo to center
  // END CHECK LEFT SENSOR
  
  float distance = readUltrasonic(trigPin1, echoPin1);
  
  Serial.print("Left Sensor: ");
  Serial.print(distance);
  Serial.print("cm    ");
  
  if (distance > SAFE_DISTANCE) {
    delay(500);
    servo.write(SERVO_LEFT);
    delay(800);
    servo.write(SERVO_CENTER);
  }
}

void checkRightSensor() {
  // Pseudocode:
  // BEGIN CHECK RIGHT SENSOR
  //   Read distance from right sensor
  //   Print distance to serial
  //   If obstacle detected beyond safe distance
  //     Wait 500ms
  //     Turn servo right
  //     Wait 800ms
  //     Return servo to center
  // END CHECK RIGHT SENSOR
  
  float distance = readUltrasonic(trigPin2, echoPin2);
  
  Serial.print("Right Sensor: ");
  Serial.print(distance);
  Serial.print("cm    ");
  
  if (distance > SAFE_DISTANCE) {
    delay(500);
    servo.write(SERVO_RIGHT);
    delay(800);
    servo.write(SERVO_CENTER);
  }
}

void loop() {
  // Pseudocode:
  // BEGIN MAIN LOOP
  //   Print new line for readability
  //   Check left sensor
  //   Check right sensor
  //   Small delay to prevent sensor interference
  // END MAIN LOOP
  
  Serial.println();
  checkLeftSensor();
  checkRightSensor();
  delay(100);
}
