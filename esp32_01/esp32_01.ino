#include <Arduino.h>

const int ledPin = 15;

void setup()
{
  pinMode(ledPin, OUTPUT);  //sets the pin as output
}

void loop()
{
  digitalWrite(ledPin, HIGH);  //turns pin on
  delay(1000);                //pauses for one second
  digitalWrite(ledPin, LOW);  //turns pin off
  delay(1000);                //pauses for one second
}
