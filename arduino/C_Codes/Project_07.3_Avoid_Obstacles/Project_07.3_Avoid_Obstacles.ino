//*************************************************************************************
/*
  Project 07.3: Obstacle Avoidance Car
*/
#include <Matrix_pico.h>
Matrix myMatrix(20,21); // Define matrix pins at GPIO20, GPIO21
// Arrays to store pattern data, can be calculated or obtained from a tool
uint8_t matrix_front[8]={0x18,0x24,0x42,0x99,0x24,0x42,0x81,0x00};
uint8_t matrix_back[8]={0x00,0x81,0x42,0x24,0x99,0x42,0x24,0x18};
uint8_t matrix_left[8]={0x12,0x24,0x48,0x90,0x90,0x48,0x24,0x12};
uint8_t matrix_right[8]={0x48,0x24,0x12,0x09,0x09,0x12,0x24,0x48};
uint8_t matrix_stop[8]={0x18,0x18,0x18,0x18,0x18,0x00,0x18,0x18};
uint8_t LEDArray[8];

// Motors
const int left_ctrl = 15; // Define left motor direction control pin GPIO15
const int left_pwm = 17;  // Define left motor speed control pin GPIO17
const int right_ctrl = 14; // Define right motor direction control pin GPIO14
const int right_pwm = 16; // Define right motor speed control pin GPIO16

// Ultrasonic Sensor
#include <UltrasonicSensor.h> // Define ultrasonic sensor library
#define TRIG_PIN 10 // Define ultrasonic trigger pin at GPIO10
#define ECHO_PIN 11 // Define ultrasonic echo pin at GPIO11
UltrasonicSensor ultrasonic(10, 11); // Define ultrasonic object and associate pins
long distance, a1, a2; // Define three distance variables

// Servo
const int servopin = 9; // Define servo pin at GPIO9
int myangle;
int pulsewidth;

void setup() {
  pinMode(left_ctrl, OUTPUT); // Set left motor direction control pin as output
  pinMode(left_pwm, OUTPUT);  // Set left motor PWM speed control pin as output
  pinMode(right_ctrl, OUTPUT); // Set right motor direction control pin as output
  pinMode(right_pwm, OUTPUT);  // Set right motor PWM speed control pin as output
  pinMode(TRIG_PIN, OUTPUT);  // Set TRIG_PIN as output
  pinMode(ECHO_PIN, INPUT);   // Set ECHO_PIN as input
  
  servopulse(servopin, 90); // Set initial servo angle to 90 degrees
  delay(300);
  
  myMatrix.begin(0x70); // Initialize matrix
  myMatrix.clear();     // Clear matrix
  myMatrix.write();
}
 
void loop() {
  avoid(); // Run obstacle avoidance main program
}

void avoid() {
  distance = ultrasonic.distanceInCentimeters(); // Get distance value from ultrasonic sensor
  if ((distance < 10) && (distance != 0)) // If distance is less than 10cm and greater than 0
  {
    car_Stop(); // Stop
    myMatrix.clear();
    matrix_display(matrix_stop); // Display stop pattern on matrix
    myMatrix.write(); // Display stop pattern on matrix
    delay(200);
    servopulse(servopin, 180); // Set servo angle to 180 degrees
    delay(300);
    a1 = ultrasonic.distanceInCentimeters(); // Measure distance
    delay(200);
    servopulse(servopin, 0); // Set servo angle to 0 degrees
    delay(300);
    a2 = ultrasonic.distanceInCentimeters(); // Measure distance
    delay(200);
    if (a1 > a2) // Compare distances; if left is greater than right
    {
      car_left(); // Turn left
      myMatrix.clear();
      matrix_display(matrix_left); // Display left pattern on matrix
      myMatrix.write(); // Display left pattern on matrix
      servopulse(servopin, 90); // Set servo angle to 90 degrees
      delay(50);
      myMatrix.clear();
      matrix_display(matrix_front); // Display forward pattern on matrix
      myMatrix.write(); // Display forward pattern on matrix
    }
    else // If right is greater than left
    {
      car_right(); // Turn right
      myMatrix.clear();
      matrix_display(matrix_right); // Display right pattern on matrix
      myMatrix.write(); // Display right pattern on matrix
      servopulse(servopin, 90); // Set servo angle to 90 degrees
      myMatrix.clear();
      matrix_display(matrix_front); // Display forward pattern on matrix
      myMatrix.write(); // Display forward pattern on matrix
    }
  }
  else // If none of the above conditions are met
  {
    car_front(); // Move forward
    myMatrix.clear();
    matrix_display(matrix_front); // Display forward pattern on matrix
    myMatrix.write(); // Display forward pattern on matrix
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

// Matrix display pattern function
void matrix_display(unsigned char matrix_value[])
{
  for (int i = 0; i < 8; i++)
  {
    LEDArray[i] = matrix_value[i];
    for (int j = 7; j >= 0; j--)
    {
      if ((LEDArray[i] & 0x01) > 0)
        myMatrix.drawPixel(j, i, 1);
      LEDArray[i] = LEDArray[i] >> 1;
    }
  } 
  myMatrix.write();
}

void car_front() // Define forward state
{
  digitalWrite(left_ctrl, LOW);  // Left motor direction control pin low
  analogWrite(left_pwm, 100);    // Left motor PWM speed 100
  digitalWrite(right_ctrl, LOW); // Right motor direction control pin low
  analogWrite(right_pwm, 100);   // Right motor PWM speed 100
}

void car_back() // Define backward state
{
  digitalWrite(left_ctrl, HIGH); // Left motor direction control pin high
  analogWrite(left_pwm, 155);    // Left motor PWM speed 155
  digitalWrite(right_ctrl, HIGH); // Right motor direction control pin high
  analogWrite(right_pwm, 155);   // Right motor PWM speed 155
}

void car_left() // Define left turn state
{
  digitalWrite(left_ctrl, HIGH); // Left motor direction control pin high
  analogWrite(left_pwm, 155);    // Left motor PWM speed 155
  digitalWrite(right_ctrl, LOW); // Right motor direction control pin low
  analogWrite(right_pwm, 100);   // Right motor PWM speed 100
}

void car_right() // Define right turn state
{
  digitalWrite(left_ctrl, LOW);  // Left motor direction control pin low
  analogWrite(left_pwm, 100);    // Left motor PWM speed 100
  digitalWrite(right_ctrl, HIGH); // Right motor direction control pin high
  analogWrite(right_pwm, 155);   // Right motor PWM speed 155
}

void car_Stop() // Define stop state
{
  digitalWrite(left_ctrl, LOW); // Left motor direction control pin low
  analogWrite(left_pwm, 0);     // Left motor PWM speed 0
  digitalWrite(right_ctrl, LOW); // Right motor direction control pin low
  analogWrite(right_pwm, 0);    // Right motor PWM speed 0
}
//*************************************************************************************