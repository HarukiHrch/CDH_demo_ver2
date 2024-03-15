#ifndef DRIVER_LED_H
#define DRIVER_LED_H

class Driver_LED
{
  public:
    Driver_LED(int pin);
    void on();
    void off();

  private:
    int _pin;
};

#endif