#include "UltrasonicSensor.h"
#include "Led.h"
#include<Arduino.h>
const int TRIGGER_PIN=4;
const int ECHO_PIN=2;
void setup()
{
  Led myLed(7);
  Serial.begin(9600);
}

void loop()
{
  UltrasonicSensor ultrasonicSensor(TRIGGER_PIN,ECHO_PIN);
  int cm=ultrasonicSensor.getTheShortestDistance(10);
    Serial.print(cm);
    Serial.println("cm");
}