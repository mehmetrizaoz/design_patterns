#pragma once

#include <string>
#include "Amplifier.h"

using namespace std;

class Amplifier;

class Tuner {
public:	
    string description;
	Amplifier *amplifier;
	double frequency;
	Tuner(string description, Amplifier *amplifier); 
	void on();
 	void off();
	void setFrequency(double frequency);
    void setAm();
    void setFm();
    string toString();
};
