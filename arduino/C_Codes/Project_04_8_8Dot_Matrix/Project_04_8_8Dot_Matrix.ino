//*************************************************************************************
/*
  Project 04 8x8 Matrix Display
  Use 8x8 matrix display to show patterns
*/
#include <Matrix_pico.h>
Matrix myMatrix(20,21);
uint8_t LedArray1[8]={0x00,0x18,0x24,0x42,0x81,0x99,0x66,0x00};
uint8_t LEDArray[8];
void setup(){
  myMatrix.begin(0x70);
}

void loop(){
  myMatrix.clear();
  for(int i=0; i<8; i++)
  {
    LEDArray[i]=LedArray1[i];
    for(int j=7; j>=0; j--)
    {
      if((LEDArray[i]&0x01)>0)
        myMatrix.drawPixel(j, i,1);
      LEDArray[i] = LEDArray[i]>>1;
    }
  }
  myMatrix.write();
}
//*************************************************************************************