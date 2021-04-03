#ifndef FORECAST_DISPLAY_H
#define FORECAST_DISPLAY_H

#include "WeatherData.h"
#include "Observer.h"
#include "DisplayElement.h"

class ForecastDisplay : public Observer, DisplayElement {
private: 
   float currentPressure = 29.92f;  
   float lastPressure;
   WeatherData *weatherData;
public:
   ForecastDisplay(WeatherData *weatherData) ;
   void update(float temp, float humidity, float pressure);
   void display();
};

#endif
