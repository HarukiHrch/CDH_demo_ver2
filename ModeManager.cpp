#include "ModeManager.h"

ModeManager::ModeManager(Mode *modeA, Mode *modeB)
    : _modeA(modeA), _modeB(modeB), _currentMode(nullptr) {}

void ModeManager::switchMode(char mode)
{
  if (mode == 'A' && _currentMode != _modeA)
  {
    _currentMode = _modeA;
    _currentMode->enter();
  }
  else if (mode == 'B' && _currentMode != _modeB)
  {
    _currentMode = _modeB;
    _currentMode->enter();
  }
}

void ModeManager::update()
{
  if (_currentMode != nullptr)
  {
    _currentMode->update();
  }
}