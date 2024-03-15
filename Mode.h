#ifndef MODE_H
#define MODE_H

#include "Component_flashLED.h"

class Mode
{
  public:
    virtual void enter() = 0;
    virtual void update() = 0;
};

#endif