//*************************************************************************************
/*
  Project 06 Motor Drive and Speed Control
  Control motor to move forward, backward, turn left, and turn right
*/
const int left_ctrl = 15; // Define left motor direction control pin GPIO15
const int left_pwm = 17;  // Define left motor speed control pin GPIO17
const int right_ctrl = 14; // Define right motor direction control pin GPIO14
const int right_pwm = 16; // Define right motor speed control pin GPIO16

void setup()
{
  pinMode(left_ctrl, OUTPUT); // Set left motor direction control pin as output
  pinMode(left_pwm, OUTPUT);  // Set left motor PWM speed control pin as output
  pinMode(right_ctrl, OUTPUT); // Set right motor direction control pin as output
  pinMode(right_pwm, OUTPUT);  // Set right motor PWM speed control pin as output
}

void loop()
{ 
  // Forward
  digitalWrite(left_ctrl, LOW);  // Left motor direction control pin low
  analogWrite(left_pwm, 200);    // Left motor PWM speed 200
  digitalWrite(right_ctrl, LOW); // Right motor direction control pin low
  analogWrite(right_pwm, 200);   // Right motor PWM speed 200
  delay(2000);                   // Delay 2 seconds
  
  // Backward
  digitalWrite(left_ctrl, HIGH); // Left motor direction control pin high
  analogWrite(left_pwm, 50);     // Left motor PWM speed 50
  digitalWrite(right_ctrl, HIGH); // Right motor direction control pin high
  analogWrite(right_pwm, 50);    // Right motor PWM speed 50
  delay(2000);                   // Delay 2 seconds
  
  // Left
  digitalWrite(left_ctrl, HIGH); // Left motor direction control pin high
  analogWrite(left_pwm, 55);     // Left motor PWM speed 55
  digitalWrite(right_ctrl, LOW); // Right motor direction control pin low
  analogWrite(right_pwm, 200);   // Right motor PWM speed 200
  delay(2000);                   // Delay 2 seconds
  
  // Right
  digitalWrite(left_ctrl, LOW);  // Left motor direction control pin low
  analogWrite(left_pwm, 200);    // Left motor PWM speed 200
  digitalWrite(right_ctrl, HIGH); // Right motor direction control pin high
  analogWrite(right_pwm, 55);    // Right motor PWM speed 55
  delay(2000);                   // Delay 2 seconds
  
  // Stop
  digitalWrite(left_ctrl, LOW);  // Left motor direction control pin low
  analogWrite(left_pwm, 0);      // Left motor PWM speed 0
  digitalWrite(right_ctrl, LOW); // Right motor direction control pin low
  analogWrite(right_pwm, 0);     // Right motor PWM speed 0
  delay(2000);                   // Delay 2 seconds
}
//*************************************************************************************