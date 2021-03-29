#include "CounterTerrorist.h"
#include <string>
#include <iostream>

using namespace std;

void CounterTerrorist::performAssignWeapon(string w){    
    weapon = w;
}

void CounterTerrorist::performMission()    {
    cout << "Counter Terrorist with weapon " << weapon << " | Task is " + TASK << endl;
}

CounterTerrorist::CounterTerrorist(){    
    type = "Counter";
}