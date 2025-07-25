//**********************************************************************************
/*
  Project 10.1: Infrared Remote Control and Receiver
*/
#include "IR.h"
#define IR_Pin 6

void setup() 
{
  Serial.begin(115200);
  IR_Init(IR_Pin);
}

void loop() 
{
  if(flagCode)
  {
    int irValue = IR_Decode(flagCode);
    Serial.println(irValue, HEX);
    IR_Release();
  }
}
//**********************************************************************************