//*************************************************************************************
/*
  Project 03 Buzzer
  Buzzer plays music
*/
#define PIN_BUZZER 12   // Define buzzer pin

void setup() 
{
  pinMode(PIN_BUZZER, OUTPUT);  // Set buzzer pin as output mode
}

void loop() 
{
    alert();  // Repeatedly play alert sound effect
}

// Alert sound effect function
void alert() 
{
  float sinVal;         // Variable to store sine value
  int toneVal;          // Variable to store sound frequency
  
  // Loop from 0 to 360 degrees
  for (int x = 0; x < 360; x += 10) 
  {
    sinVal = sin(x * (PI / 180));       // Calculate sine value of x
    toneVal = 2000 + sinVal * 500;      // Calculate sound frequency based on sine value
    freq(PIN_BUZZER, toneVal, 10);      // Generate sound at specified frequency
  }
}

// Frequency output function
// Parameters: pin number, frequency (Hz), duration (ms)
void freq(int PIN, int freqs, int times) 
{
  if (freqs == 0) 
  {
    digitalWrite(PIN, LOW);  // Turn off output when frequency is 0
  }
  else 
  {
    // Calculate number of cycles based on frequency and duration
    for (int i = 0; i < times * freqs / 1000; i++) 
    {
      digitalWrite(PIN, HIGH);
      delayMicroseconds(1000000 / freqs / 2);  // Half-cycle high
      digitalWrite(PIN, LOW);
      delayMicro.modifyseconds(1000000 / freqs / 2);  // Half-cycle low
    }
  }
}
//*************************************************************************************