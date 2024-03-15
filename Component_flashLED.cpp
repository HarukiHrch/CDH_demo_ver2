#include "Arduino.h"
#include "Component_flashLED.h"

Component_flashLED::Component_flashLED(Driver_LED *driver, unsigned long interval)
    : _driver(driver), _interval(interval), _lastToggle(0) {}

void Component_flashLED::update()
{
  unsigned long currentMillis = millis();
  if (currentMillis - _lastToggle >= _interval)
  {
    _lastToggle = currentMillis;
    // Toggle the LED state
    static bool ledState = false;
    if (ledState)
    {
      _driver->off();
    }
    else
    {
      _driver->on();
    }
    ledState = !ledState;
  }
}
