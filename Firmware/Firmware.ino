#include "Global.h"

void setup()
{
  Serial.begin(9600);
  Serial.println("start");
}

void loop()
{
  if (pir.read())
  {
    Serial.println("PIR detecting");
  }
  delay(20);
}
