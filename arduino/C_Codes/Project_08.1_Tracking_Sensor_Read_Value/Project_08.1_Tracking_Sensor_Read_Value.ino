//*************************************************************************************
/*
  Project 08.1: Tracking Sensor Reading
*/
#define tracking_left  7  // Define left infrared tracking pin GPIO7
#define tracking_right  8  // Define right infrared tracking pin GPIO8
int L_val, R_val; // Define variables for left and right infrared tracking

void setup() {
  Serial.begin(115200); // Set baud rate to 115200
  pinMode(tracking_left, INPUT); // Set left infrared tracking pin as input mode
  pinMode(tracking_right, INPUT); // Set right infrared tracking pin as input mode
}

void loop() {
  L_val = digitalRead(tracking_left); // Read left infrared tracking value
  R_val = digitalRead(tracking_right); // Read right infrared tracking value
  Serial.print("L_val: "); // Print string "L_val" to serial
  Serial.print(L_val); // Print L_val value to serial
  Serial.print("    "); // Print space to serial
  Serial.print("R_val: "); // Print string "R_val" to serial
  Serial.println(R_val); // Print R_val value to serial
  delay(300); // Delay 0.3 seconds
}
//*************************************************************************************