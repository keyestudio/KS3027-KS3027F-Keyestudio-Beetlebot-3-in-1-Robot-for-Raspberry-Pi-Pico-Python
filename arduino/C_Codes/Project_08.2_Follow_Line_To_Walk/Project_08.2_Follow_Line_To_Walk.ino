//*************************************************************************************
/*
  Project 08.2: Line Following
*/
// Motors
const int left_ctrl = 15; // Define left motor direction control pin GPIO15
const int left_pwm = 17;  // Define left motor speed control pin GPIO17
const int right_ctrl = 14; // Define right motor direction control pin GPIO14
const int right_pwm = 16; // Define right motor speed control pin GPIO16

// Infrared Tracking
#define tracking_left  7  // Define left infrared tracking pin GPIO7
#define tracking_right  8  // Define right infrared tracking pin GPIO8
int L_val, R_val; // Define variables for left and right infrared tracking

// Servo
const int servopin = 9; // Define servo pin at GPIO9
int myangle;
int pulsewidth;

void setup() {
  pinMode(left_ctrl, OUTPUT); // Set left motor direction control pin as output
  pinMode(left_pwm, OUTPUT);  // Set left motor PWM speed control pin as output
  pinMode(right_ctrl, OUTPUT); // Set right motor direction control pin as output
  pinMode(right_pwm, OUTPUT);  // Set right motor PWM speed control pin as output
  
  pinMode(tracking_left, INPUT); // Set left infrared tracking pin as input
  pinMode(tracking_right, INPUT); // Set right infrared tracking pin as input
 
  servopulse(servopin, 90); // Set initial servo angle to 90 degrees
  delay(300);
}

void loop() 
{
  tracking(); // Run main program
}

void tracking()
{
  L_val = digitalRead(tracking_left); // Read left infrared tracking value
  R_val = digitalRead(tracking_right); // Read right infrared tracking value
  if ((L_val == 1) && (R_val == 1)) // If both left and right infrared sensors detect black line
  {
    front(); // Car moves forward
  }
  else if ((L_val == 1) && (R_val == 0)) // If left sensor detects black line but right does not
  {
    left(); // Car turns left
  }
  else if ((L_val == 0) && (R_val == 1)) // If right sensor detects black line but left does not
  {
    right(); // Car turns right
  }
  else // If neither left nor right sensor detects black line
  {
    Stop(); // Car stops
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
  analogWrite(left_pwm, 100);    // Left motor PWM speed 100
  digitalWrite(right_ctrl, LOW); // Right motor direction control pin low
  analogWrite(right_pwm, 100);   // Right motor PWM speed 100
}

void left() // Define left turn state
{
  digitalWrite(left_ctrl, HIGH); // Left motor direction control pin high
  analogWrite(left_pwm, 155);    // Left motor PWM speed 155
  digitalWrite(right_ctrl, LOW); // Right motor direction control pin low
  analogWrite(right_pwm, 100);   // Right motor PWM speed 100
}

void right() // Define right turn state
{
  digitalWrite(left_ctrl, LOW);  // Left motor direction control pin low
  analogWrite(left_pwm, 100);    // Left motor PWM speed 100
  digitalWrite(right_ctrl, HIGH); // Right motor direction control pin high
  analogWrite(right_pwm, 155);   // Right motor PWM speed 155
}

void Stop() // Define stop state
{
  digitalWrite(left_ctrl, LOW); // Left motor direction control pin low
  analogWrite(left_pwm, 0);     // Left motor PWM speed 0
  digitalWrite(right_ctrl, LOW); // Right motor direction control pin low
  analogWrite(right_pwm, 0);    // Right motor PWM speed 0
}
//*************************************************************************************