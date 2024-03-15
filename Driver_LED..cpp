#include "Arduino.h"
#include "Driver_LED.h"

Driver_LED::Driver_LED(int pin) : _pin(pin)
{
  pinMode(_pin, OUTPUT);
  off();
}

void Driver_LED::on()
{
  digitalWrite(_pin, HIGH);
}

void Driver_LED::off()
{
  digitalWrite(_pin, LOW);
}