//*************************************************************************************
/*
  Project 09.2: Light Following Car
*/
// Motors
const int left_ctrl = 15; // Define left motor direction control pin GPIO15
const int left_pwm = 17;  // Define left motor speed control pin GPIO17
const int right_ctrl = 14; // Define right motor direction control pin GPIO14
const int right_pwm = 16; // Define right motor speed control pin GPIO16

// Left and Right Photosensitive Sensors
#define light_L_Pin  26   // Define left photosensitive sensor pin GPIO26
#define light_R_Pin  27   // Define right photosensitive sensor pin GPIO27
int left_light; 
int right_light;

// Servo
const int servopin = 9; // Define servo pin at GPIO9
int myangle;
int pulsewidth;

void setup(){
  Serial.begin(115200); // Set baud rate to 115200
  pinMode(light_L_Pin, INPUT); // Set left photosensitive sensor pin as input
  pinMode(light_R_Pin, INPUT); // Set right photosensitive sensor pin as input
  
  pinMode(left_ctrl, OUTPUT); // Set left motor direction control pin as output
  pinMode(left_pwm, OUTPUT);  // Set left motor PWM speed control pin as output
  pinMode(right_ctrl, OUTPUT); // Set right motor direction control pin as output
  pinMode(right_pwm, OUTPUT);  // Set right motor PWM speed control pin as output
  
  servopulse(servopin, 90); // Set initial servo angle to 90 degrees
  delay(300);
}

void loop(){
  left_light = analogRead(light_L_Pin); // Read left photosensitive sensor value
  right_light = analogRead(light_R_Pin); // Read right photosensitive sensor value
  Serial.print("left_light_value = ");
  Serial.println(left_light);
  Serial.print("right_light_value = ");
  Serial.println(right_light);
  if (left_light > 700 && right_light > 700) // Range values detected by left and right photosensitive sensors
  {  
    Car_front(); // Car moves forward
  } 
  else if (left_light > 700 && right_light <= 700)  // Range values detected by left and right photosensitive sensors
  {
    Car_left(); // Car turns left
  } 
  else if (left_light <= 700 && right_light > 700) // Range values detected by left and right photosensitive sensors
  {
    Car_right(); // Car turns right
  } 
  else  // For all other cases
  {
    Car_Stop(); // Car stops
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

void Car_front()
{
  digitalWrite(left_ctrl, LOW);  // Left motor direction control pin low
  analogWrite(left_pwm, 100);    // Left motor PWM speed 100
  digitalWrite(right_ctrl, LOW); // Right motor direction control pin low
  analogWrite(right_pwm, 100);   // Right motor PWM speed 100
}

void Car_left()
{
  digitalWrite(left_ctrl, HIGH); // Left motor direction control pin high
  analogWrite(left_pwm, 155);    // Left motor PWM speed 155
  digitalWrite(right_ctrl, LOW); // Right motor direction control pin low
  analogWrite(right_pwm, 100);   // Right motor PWM speed 100
}

void Car_right()
{
  digitalWrite(left_ctrl, LOW);  // Left motor direction control pin low
  analogWrite(left_pwm, 100);    // Left motor PWM speed 100
  digitalWrite(right_ctrl, HIGH); // Right motor direction control pin high
  analogWrite(right_pwm, 155);   // Right motor PWM speed 155
}

void Car_Stop()
{
  digitalWrite(left_ctrl, LOW); // Left motor direction control pin low
  analogWrite(left_pwm, 0);     // Left motor PWM speed 0
  digitalWrite(right_ctrl, LOW); // Right motor direction control pin low
  analogWrite(right_pwm, 0);    // Right motor PWM speed 0
}
//*************************************************************************************