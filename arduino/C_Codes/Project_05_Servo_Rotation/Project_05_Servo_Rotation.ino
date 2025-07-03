//*************************************************************************************
/*
  Project 05 Servo Rotation
  Control servo to perform sweeping motion
*/
#include <Servo.h>
#define servoPin 9

Servo myServo;  // Create servo object to control a servo
int pos = 0;    // Variable to store the servo position

void setup() 
{
  myServo.attach(servoPin);  // Attach the servo to the specified pin
}

void loop() 
{
  // Move from 0 to 180 degrees
  for (pos = 0; pos <= 180; pos += 1) 
  { 
    myServo.write(pos);      // Command servo to move to position pos
    delay(15);               // Wait 15ms for the servo to reach the position
  }
  // Move from 180 to 0 degrees
  for (pos = 180; pos >= 0; pos -= 1) 
  { 
    myServo.write(pos);      // Command servo to move to position pos
    delay(15);               // Wait 15ms for the servo to reach the position
  }
}
//*************************************************************************************