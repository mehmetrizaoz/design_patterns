#include "StatisticsDisplay.h"
#include <iostream>

using namespace std;

StatisticsDisplay::StatisticsDisplay(WeatherData *weatherData) {
   this->weatherData = weatherData;
   weatherData->registerObserver(this);
}

void StatisticsDisplay::update(float temp, float humidity, float pressure) {
   tempSum += temp;
   numReadings++;

   if (temp > maxTemp) {
	maxTemp = temp;
   }

   if (temp < minTemp) {
	minTemp = temp;
   }

   display();
}

void StatisticsDisplay::display() {
   cout << "Avg/Max/Min temperature = " << (tempSum / numReadings)
	<< "/" << maxTemp << "/" << minTemp << endl;
}
