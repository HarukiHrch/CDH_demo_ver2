#ifndef COMPONENT_FLASHLED_H
#define COMPONENT_FLASHLED_H

#include "Driver_LED.h"

class Component_flashLED
{
  public:
    Component_flashLED(Driver_LED *driver, unsigned long interval);
    void update();

  private:
    Driver_LED *_driver;
    unsigned long _interval;
    unsigned long _lastToggle;
};

#endif