#ifndef MODE_A_H
#define MODE_A_H

#include "Mode.h"

class Mode_A : public Mode
{
  public:
    Mode_A(Component_flashLED *flasher);
    void enter() override;
    void update() override;

  private:
    Component_flashLED *_flasher;
};

#endif