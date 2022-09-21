#include <Arduino.h>
// PSUDO CODE
// setup basic
#define baud_rate 115200
void setup()
{
  Serial.begin(baud_rate);
  Serial.print(__DATE__);
  Serial.print(__TIME__);
}

void loop()
{
  // put your main code here, to run repeatedly:
}