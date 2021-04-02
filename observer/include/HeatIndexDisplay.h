#ifndef HEAT_INDEX_DISPLAY_H
#define HEAT_INDEX_DISPLAY_H

//#include "WeatherData.h"
#include "Observer.h"
#include "DisplayElement.h"

class HeatIndexDisplay : public Observer, DisplayElement {
public:
   float heatIndex = 0.0f;
   //WeatherData weatherData;
   //HeatIndexDisplay(WeatherData weatherData);
   void update(float t, float rh, float pressure);
   void display();
private:
   float computeHeatIndex(float t, float rh);
};


#endif
