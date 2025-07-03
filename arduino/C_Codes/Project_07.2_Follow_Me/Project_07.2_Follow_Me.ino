//*************************************************************************************
/*
  Project 07.2: Follow Car
  Implement car following object functionality
*/
// Motors
const int left_ctrl = 15; // Define left motor direction control pin GPIO15
const int left_pwm = 17;  // Define left motor speed control pin GPIO17
const int right_ctrl = 14; // Define right motor direction control pin GPIO14
const int right_pwm = 16; // Define right motor speed control pin GPIO16

// Ultrasonic Sensor
#include <UltrasonicSensor.h> // Define ultrasonic sensor library
#define TRIG_PIN 10 // Define ultrasonic trigger pin as GPIO10
#define ECHO_PIN 11 // Define ultrasonic echo pin as GPIO11
UltrasonicSensor ultrasonic(10, 11); // Connect Trigger and Echo pins
long distance;

// Servo
const int servopin = 9; // Define servo pin as GPIO9
int myangle;
int pulsewidth;

void setup() {
  Serial1.begin(9600);
  pinMode(left_ctrl, OUTPUT); // Set left motor direction control pin as output
  pinMode(left_pwm, OUTPUT);  // Set left motor PWM speed control pin as output
  pinMode(right_ctrl, OUTPUT); // Set right motor direction control pin as output
  pinMode(right_pwm, OUTPUT);  // Set right motor PWM speed control pin as output
  pinMode(TRIG_PIN, OUTPUT);  // Set TRIG_PIN as output
  pinMode(ECHO_PIN, INPUT);   // Set ECHO_PIN as input
  
  servopulse(servopin, 90); // Set initial servo angle to 90 degrees
  delay(300);
}

void loop() {
  distance = ultrasonic.distanceInCentimeters(); // Measure distance with ultrasonic sensor
  Serial.println(distance);
  if (distance < 8) // If distance is less than 8cm
  {
    back(); // Move backward
  }
  else if ((distance >= 8) && (distance < 13)) // If distance is between 8 and 13cm
  {
    Stop(); // Stop
  }
  else if ((distance >= 13) && (distance < 35)) // If distance is between 13 and 35cm
  {
    front(); // Move forward to follow
  }
  else // If none of the above conditions are met
  {
    Stop(); // Stop
  }
}

void servopulse(int servopin, int myangle) // Servo angle control function
{
  for (int i = 0; i < 20; i++)
  {
    pulsewidth = (myangle * 11) + 500;
    digitalWrite(servopin, HIGH);
    delayMicroseconds(pulsewidth);
    digitalWrite(servopin, LOW);
    delay(20 - pulsewidth / 1000);
  }  
}

void front() // Define forward state
{
  digitalWrite(left_ctrl, LOW);  // Left motor direction control pin low
  analogWrite(left_pwm, 150);    // Left motor PWM speed 150
  digitalWrite(right_ctrl, LOW); // Right motor direction control pin low
  analogWrite(right_pwm, 150);   // Right motor PWM speed 150
}

void back() // Define backward state
{
  digitalWrite(left_ctrl, HIGH); // Left motor direction control pin high
  analogWrite(left_pwm, 150);    // Left motor PWM speed 150
  digitalWrite(right_ctrl, HIGH); // Right motor direction control pin high
  analogWrite(right_pwm, 150);   // Right motor PWM speed 150
}

void Stop() // Define stop state
{
  digitalWrite(left_ctrl, LOW); // Left motor direction control pin low
  analogWrite(left_pwm, 0);     // Left motor PWM speed 0
  digitalWrite(right_ctrl, LOW); // Right motor direction control pin low
  analogWrite(right_pwm, 0);    // Right motor PWM speed 0
}
//*************************************************************************************