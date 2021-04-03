#include "WeatherData.h"
#include "Observer.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Observer;

WeatherData::WeatherData() {}

void WeatherData::performRegisterObserver(Observer *o) {  
    observers.push_back(o);    
}

void WeatherData::performRemoveObserver(Observer *o) {
    auto it = find(observers.begin(), observers.end(), o);
    
    if (it != observers.end()) {
       observers.erase(it);
    }
}

void WeatherData::performNotifyObservers() {
    for (int i = 0; i < observers.size(); i++) {
        observers.at(i)->update(temperature, humidity, pressure);
    }
}

void WeatherData::measurementsChanged() {
    performNotifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure) {
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    measurementsChanged();
}

float WeatherData::getTemperature() {
    return temperature;
}

float WeatherData::getHumidity() {
    return humidity;
}

float WeatherData::getPressure() {
    return pressure;
}
