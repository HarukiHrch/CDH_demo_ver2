#ifndef MODEMANAGER_H
#define MODEMANAGER_H

#include "Mode.h"

class ModeManager
{
  public:
    ModeManager(Mode *modeA, Mode *modeB);
    void switchMode(char mode);
    void update();

  private:
    Mode *_currentMode;
    Mode *_modeA;
    Mode *_modeB;
};

#endif