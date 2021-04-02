#ifndef STATISTICS_DISPLAY_H
#define STATISTICS_DISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"


class StatisticsDisplay : public Observer, DisplayElement {
private:
   float maxTemp = 0.0f;
   float minTemp = 200;
   float tempSum= 0.0f;
   int numReadings;
   //WeatherData weatherData;
public:
   //StatisticsDisplay(WeatherData weatherData);
   void performUpdate(float temp, float humidity, float pressure);
   void performDisplay();
};

#endif
