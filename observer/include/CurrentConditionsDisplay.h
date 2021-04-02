#ifndef CURRENT_CONDITION_DISPLAY_H
#define CURRENT_CONDITION_DISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"

class CurrentConditionsDisplay : public Observer, DisplayElement {
public:
   CurrentConditionsDisplay(/*Subject weatherData*/);
   void performUpdate(float temperature, float humidity, float pressure);
   void performDisplay();

private:
   float temperature;
   float humidity;
   //Subject weatherData;
};

#endif
