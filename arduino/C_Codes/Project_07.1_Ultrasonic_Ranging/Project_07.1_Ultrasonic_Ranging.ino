//*************************************************************************************
/*
  Project 07.1 Ultrasonic Distance Measurement
  Use ultrasonic sensor to detect object distance
*/

#define trigPin 10    // Define trigger pin as GPIO10
#define echoPin 11    // Define echo pin as GPIO11
#define MAX_DISTANCE 700 // Maximum measurement distance of sensor is 400-500cm

// Timeout = 2 * max distance / 100 / 340 * 1000000 = max distance * 58.8
float timeOut = MAX_DISTANCE * 60;
int soundVelocity = 340; // Define speed of sound as 340m/s

void setup() 
{
  pinMode(trigPin, OUTPUT); // Set trigger pin as output mode
  pinMode(echoPin, INPUT);  // Set echo pin as input mode
  Serial.begin(115200);     // Start serial monitor with baud rate 115200
}

void loop() 
{
  delay(100); // 100ms interval between measurements (approx. 20 measurements per second)
  Serial.print("Distance: ");
  Serial.print(getSonar()); // Send signal, get distance (cm), and print result
  Serial.println("cm");
}

float getSonar() 
{
  unsigned long pingTime;
  float distance;
  // Output 10us high pulse on trigger pin to activate HC-SR04
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Wait for HC-SR04 to return high pulse and measure duration
  pingTime = pulseIn(echoPin, HIGH, timeOut);
  // Calculate distance based on time
  distance = (float)pingTime * soundVelocity / 2 / 10000;
  return distance; // Return distance value
}
//*************************************************************************************