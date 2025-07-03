//**********************************************************************
/*
 * File Name    : Onboard LED flashing
 * Description  : Implement LED blinking
 * Author       : http://www.keyestudio.com
*/
#define LED_BUILTIN 25

// setup function runs once on reset or power-up
void setup() 
{
    // Initialize LED pin as output mode
    pinMode(LED_BUILTIN, OUTPUT);
}

// loop function runs repeatedly
void loop() 
{
    digitalWrite(LED_BUILTIN, HIGH);   // Turn on LED (high level)
    delay(1000);                       // Delay for 1 second
    digitalWrite(LED_BUILTIN, LOW);    // Turn off LED (low level)
    delay(1000);                       // Delay for 1 second
}
//*************************************************************************************