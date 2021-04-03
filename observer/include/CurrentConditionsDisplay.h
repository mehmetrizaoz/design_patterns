#ifndef CURRENT_CONDITION_DISPLAY_H
#define CURRENT_CONDITION_DISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"

class CurrentConditionsDisplay : public Observer, DisplayElement {
public:
   CurrentConditionsDisplay(Subject *weatherData);
   void update(float temperature, float humidity, float pressure);
   void display();

private:
   float temperature;
   float humidity;
   Subject *weatherData;
};

#endif
