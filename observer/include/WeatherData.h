#ifndef WEATHER_DATA_H
#define WEATHER_DATA_H

#include "Subject.h"
#include "Observer.h"
#include <vector>
#include <iostream>

using namespace std;

class WeatherData : public Subject {
private:
	float temperature;
	float humidity;
	float pressure;
public:	
    vector<Observer*> observers;
	WeatherData();
    void registerObserver(Observer *o);
	void removeObserver(Observer *o);	
	void notifyObservers();	
	void measurementsChanged();
	void setMeasurements(float temperature, float humidity, float pressure);	
	float getTemperature();
	float getHumidity();
	float getPressure();
};

#endif