#include "ForecastDisplay.h"
#include "Observer.h"
#include "DisplayElement.h"
#include <iostream>
#include "WeatherData.h"

using namespace std;

ForecastDisplay::ForecastDisplay(WeatherData *weatherData) {
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void ForecastDisplay::update(float temp, float humidity, float pressure) {
            lastPressure = currentPressure;
    currentPressure = pressure;

    display();
}

void ForecastDisplay::display() {
    cout << "Forecast: ";
    if (currentPressure > lastPressure) {
        cout << "Improving weather on the way!" << endl;
    } else if (currentPressure == lastPressure) {
        cout << "More of the same" << endl;
    } else if (currentPressure < lastPressure) {
        cout << "Watch out for cooler, rainy weather" << endl;
    }
}
