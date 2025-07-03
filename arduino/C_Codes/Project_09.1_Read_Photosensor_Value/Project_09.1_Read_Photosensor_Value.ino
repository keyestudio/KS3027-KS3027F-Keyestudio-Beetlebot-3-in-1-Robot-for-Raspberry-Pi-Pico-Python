//*************************************************************************************
/*
  Project 08.1: Read Photosensitive Sensor Value
  Use Raspberry Pi Pico to read photosensitive resistor value
*/
#define PHOTOSENSITIVE_PIN 26 // Define pin for reading photosensitive sensor on Raspberry Pi Pico
int photosensitiveADC;        // Define variable to store ADC value

void setup()
{
  pinMode(PHOTOSENSITIVE_PIN, INPUT); // Configure pin as input mode
  Serial.begin(115200);          // Initialize serial communication with baud rate 115200
}

void loop()
{
  photosensitiveADC = analogRead(PHOTOSENSITIVE_PIN); // Read photosensitive resistor value
  Serial.print("photosensitiveADC: ");
  Serial.println(photosensitiveADC);         // Print photosensitive resistor value
  delay(500); // Delay 500 milliseconds
}
//*************************************************************************************