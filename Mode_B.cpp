#include "Mode_B.h"

Mode_B::Mode_B(Component_flashLED *flasher) : _flasher(flasher) {}

void Mode_B::enter()
{
  // Initialize mode B specific configurations if necessary
}

void Mode_B::update()
{
  _flasher->update(); // Update the slow flashing behavior
}