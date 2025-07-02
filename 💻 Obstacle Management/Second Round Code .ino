#include <Servo.h>
#include <Pixy2.h>

// ===== PIN DEFINITIONS =====
const int trigPin1 = 0;    // Left ultrasonic sensor
const int echoPin1 = 1;    
const int trigPin2 = 2;    // Right ultrasonic sensor
const int echoPin2 = 3;    
const int servoPin = 4;    // Steering servo
const int ENA = 5;         // Motor PWM
const int IN1 = 6;         // Motor IN1
const int IN2 = 7;         // Motor IN2

// ===== CONSTANTS =====
// Steering angles
#define LEFT_ANGLE 50      // Full left angle
#define RIGHT_ANGLE 131    // Full right angle
#define CENTER_ANGLE 85    // Center angle
#define LEFT_ANGLE_PIXY 50 // Left angle for Pixy
#define RIGHT_ANGLE_PIXY 132 // Right angle for Pixy

// Speed settings
#define NORMAL_SPEED 143   // Normal forward speed
#define TURN_SPEED 145     // Speed during turns
#define CORRECTION_SPEED 135 // Speed during wall correction
#define STOP_SPEED 0       // Stop speed

// Thresholds
#define WALL_THRESHOLD 180 // Distance threshold (cm)
#define WALL_CORRECTION_THRESHOLD 50 // Distance for wall correction (cm)
#define WALL_DIFFERENCE_THRESHOLD 30 // Minimum difference to trigger correction

// Timing
#define LEFT_TURN_DELAY 1200    // Left turn duration
#define RIGHT_TURN_DELAY 1050   // Right turn duration
#define LEFT_TURN_DELAY_PIXY 1000 // Left turn duration for Pixy
#define RIGHT_TURN_DELAY_PIXY 900 // Right turn duration for Pixy
#define CORRECTION_DELAY 200    // Wall correction duration

Pixy2 pixy;                   // Pixy2 camera object
Servo steeringServo;           // Steering servo
int turnCounter = 0;           // Counts completed turns
int lastCorrectionTime = 0;    // Tracks last wall correction time
int correctionCooldown = 1000; // Time between corrections

void setup() {
  // Configure pins
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);

  // Initialize servo
  steeringServo.attach(servoPin);
  steeringServo.write(CENTER_ANGLE);
  
  // Start moving forward
  setMotorForward(NORMAL_SPEED);
  
  // Initialize Pixy camera
  pixy.init();
  pixy.setLamp(1, 1);
}

/**
 * Measures distance from ultrasonic sensor
 * @param trigPin Trigger pin
 * @param echoPin Echo pin
 * @return Distance in cm
 */
long measureDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  return pulseIn(echoPin, HIGH, 30000) * 0.034 / 2;
}

/**
 * Sets motor to move forward at specified speed
 * @param speed Motor speed (0-255)
 */
void setMotorForward(int speed) {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, speed);
}

/**
 * Sets motor to stop
 */
void setMotorStop() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, STOP_SPEED);
}

/**
 * Performs wall correction based on sensor readings
 * @param leftDist Left sensor distance
 * @param rightDist Right sensor distance
 */
void performWallCorrection(int leftDist, int rightDist) {
  if (millis() - lastCorrectionTime < correctionCooldown) return;
  
  int difference = leftDist - rightDist;
  
  if (abs(difference) > WALL_DIFFERENCE_THRESHOLD) {
    if (difference > 0) {
      // Left wall is closer, adjust right
      steeringServo.write(CENTER_ANGLE + 15); // Small right adjustment
    } else {
      // Right wall is closer, adjust left
      steeringServo.write(CENTER_ANGLE - 15); // Small left adjustment
    }
    
    setMotorForward(CORRECTION_SPEED);
    delay(CORRECTION_DELAY);
    steeringServo.write(CENTER_ANGLE);
    lastCorrectionTime = millis();
  }
}

void loop() {
  // Read sensors
  int leftDist = measureDistance(trigPin1, echoPin1);
  delay(10); // Small delay between sensor readings
  int rightDist = measureDistance(trigPin2, echoPin2);
  
  // Check Pixy camera
  pixy.ccc.getBlocks();
  
  if (pixy.ccc.numBlocks) {
    int color = pixy.ccc.blocks[0].m_signature;
    
    if (color == 1) { // Green detected
      Serial.println("Green detected - turning left");
      steeringServo.write(LEFT_ANGLE_PIXY);
      setMotorForward(TURN_SPEED);
      delay(LEFT_TURN_DELAY_PIXY);
      steeringServo.write(CENTER_ANGLE);
      delay(200);
      setMotorForward(NORMAL_SPEED);
      delay(200);
    } 
    else if (color == 2) { // Red detected
      Serial.println("Red detected - turning right");
      steeringServo.write(RIGHT_ANGLE_PIXY);
      setMotorForward(TURN_SPEED);
      delay(RIGHT_TURN_DELAY_PIXY);
      steeringServo.write(CENTER_ANGLE);
      delay(250);
      setMotorForward(NORMAL_SPEED);
      delay(200);
    } 
    else if (color == 3) { // Special color
      Serial.println("Special color - counting turn");
      turnCounter++;
      delay(200);
    }
  } 
  else {
    // Check turn counter for final stop
    if (turnCounter >= 12) {
      setMotorForward(150);
      delay(500);
      setMotorStop();
      while (true); // Permanent stop
    }
    
    // Wall following logic
    if (leftDist < WALL_THRESHOLD && rightDist < WALL_THRESHOLD) {
      // Both walls detected - go straight
      steeringServo.write(CENTER_ANGLE);
      setMotorForward(NORMAL_SPEED);
    } 
    else if (leftDist > WALL_THRESHOLD) {
      // Left open - turn left
      steeringServo.write(LEFT_ANGLE);
      setMotorForward(TURN_SPEED);
      delay(LEFT_TURN_DELAY);
      steeringServo.write(CENTER_ANGLE);
      delay(200);
      setMotorForward(NORMAL_SPEED);
      delay(200);
    } 
    else if (rightDist > WALL_THRESHOLD) {
      // Right open - turn right
      steeringServo.write(RIGHT_ANGLE);
      setMotorForward(TURN_SPEED);
      delay(RIGHT_TURN_DELAY);
      steeringServo.write(CENTER_ANGLE);
      delay(250);
      setMotorForward(NORMAL_SPEED);
      delay(200);
    }
    
    // Wall correction logic
    if (leftDist < WALL_CORRECTION_THRESHOLD || rightDist < WALL_CORRECTION_THRESHOLD) {
      performWallCorrection(leftDist, rightDist);
    }
  }
}
