#ifndef MODE_B_H
#define MODE_B_H

#include "Mode.h"

class Mode_B : public Mode
{
  public:
    Mode_B(Component_flashLED *flasher);
    void enter() override;
    void update() override;

  private:
    Component_flashLED *_flasher;
};

#endif