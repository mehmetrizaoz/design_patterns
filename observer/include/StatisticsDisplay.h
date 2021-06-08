#pragma once

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

class StatisticsDisplay : public Observer, DisplayElement {
private:
   float maxTemp = 0.0f;
   float minTemp = 200;
   float tempSum= 0.0f;
   int numReadings;
   WeatherData *weatherData;
public:
   StatisticsDisplay(WeatherData *weatherData);
   void update(float temp, float humidity, float pressure);
   void display();
};

