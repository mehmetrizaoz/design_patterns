#pragma once

#include <string>

using namespace std;

class TheaterLights {
public:	
    string description;	
	TheaterLights(string description);
    void on();
	void off();  
	void dim(int level);   
    string toString();
};
