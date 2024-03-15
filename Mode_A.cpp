#include "Mode_A.h"

Mode_A::Mode_A(Component_flashLED *flasher) : _flasher(flasher) {}

void Mode_A::enter()
{
  // Initialize mode A specific configurations if necessary
}

void Mode_A::update()
{
  _flasher->update(); // Update the fast flashing behavior
}