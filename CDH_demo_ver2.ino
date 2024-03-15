#include "includes.h"

#define SERIAL_SPEED 115200

// Instantiate
Driver_LED ledDriver(LED_PIN);
Component_flashLED fastFlasher(&ledDriver, 100);  // Fast
Component_flashLED slowFlasher(&ledDriver, 1000); // Slow
Mode_A modeA(&fastFlasher);
Mode_B modeB(&slowFlasher);
ModeManager modeManager(&modeA, &modeB);

void setup()
{
  Serial.begin(SERIAL_SPEED);
  modeManager.switchMode('A'); // Start with mode A
}

void loop()
{
  if (Serial.available() > 0)
  {
    char mode = Serial.read();
    modeManager.switchMode(mode);
  }
  modeManager.update();
}