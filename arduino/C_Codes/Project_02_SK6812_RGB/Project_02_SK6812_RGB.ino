//*************************************************************************************
/*
  Project 02 SK6812 RGB
  4 RGB LEDs to achieve multiple lighting effects
*/
#include <Adafruit_NeoPixel.h>

#define PIN 13

// Parameter 1 = number of LEDs in the strip
// Parameter 2 = Arduino pin number (most pins are valid)
// Parameter 3 = pixel type flags, combine as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products with WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels wired for RGB bitstream (v1 FLORA pixels)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(4, PIN, NEO_GRB + NEO_KHZ800);

// Important Notes: To reduce the risk of NeoPixel burnout, please:
// 1. Add a 1000uF capacitor across the power lines
// 2. Add a 300-500 ohm resistor to the first pixel's data input
// 3. Minimize the distance between Arduino and the first pixel
// 4. Avoid connecting the circuit while powered; if necessary, connect GND first

void setup() 
{
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() 
{
  // Example program demonstrating pixel control:
  colorWipe(strip.Color(255, 0, 0), 50); // Red
  colorWipe(strip.Color(0, 255, 0), 50); // Green
  colorWipe(strip.Color(0, 0, 255), 50); // Blue
  
  // Theater chase effect...
  theaterChase(strip.Color(127, 127, 127), 50); // White
  theaterChase(strip.Color(127,   0,   0), 50); // Red
  theaterChase(strip.Color(  0,   0, 127), 50); // Blue

  rainbow(20);
  rainbowCycle(20);
  theaterChaseRainbow(50);
}

// Fill the strip with a color one pixel at a time
void colorWipe(uint32_t c, uint8_t wait) 
{
  for(uint16_t i=0; i<strip.numPixels(); i++) 
  {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
  }
}

// Rainbow effect
void rainbow(uint8_t wait) 
{
  uint16_t i, j;
  for(j=0; j<256; j++) 
  {
    for(i=0; i<strip.numPixels(); i++) 
    {
      strip.setPixelColor(i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

// Evenly distributed rainbow effect
void rainbowCycle(uint8_t wait) 
{
  uint16_t i, j;
  for(j=0; j<256*5; j++)  // Cycle through all colors 5 times
  {
    for(i=0; i< strip.numPixels(); i++) 
    {
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

// Theater-style chasing lights
void theaterChase(uint32_t c, uint8_t wait) 
{
  for (int j=0; j<10; j++)   // Run 10 chase cycles
  {
    for (int q=0; q < 3; q++) 
    {
      for (int i=0; i < strip.numPixels(); i=i+3) 
      {
        strip.setPixelColor(i+q, c);    // Turn on every third pixel
      }
      strip.show();
      delay(wait);
      for (int i=0; i < strip.numPixels(); i=i+3) 
      {
        strip.setPixelColor(i+q, 0);   // Turn off every third pixel
      }
    }
  }
}

// Rainbow-colored theater chase effect
void theaterChaseRainbow(uint8_t wait) 
{
  for (int j=0; j < 256; j++)      // Cycle through all 256 colors
  {
    for (int q=0; q < 3; q++) 
    {
        for (int i=0; i < strip.numPixels(); i=i+3) 
        {
          strip.setPixelColor(i+q, Wheel((i+j) % 255));  // Turn on every third pixel
        }
        strip.show();
        delay(wait);
        for (int i=0; i < strip.numPixels(); i=i+3) 
        {
          strip.setPixelColor(i+q, 0);  // Turn off every third pixel
        }
    }
  }
}

// Input a value 0 to 255 to get a color value
// Colors transition: red - green - blue - back to red
uint32_t Wheel(byte WheelPos) 
{
  if(WheelPos < 85) 
  {
   return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  } 
  else if(WheelPos < 170) 
  {
   WheelPos -= 85;
   return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } 
  else 
  {
   WheelPos -= 170;
   return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
}
//*************************************************************************************