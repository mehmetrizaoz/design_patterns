#include "CounterTerrorist.h"
#include <string>
#include <iostream>

using namespace std;

void CounterTerrorist::assignWeapon(string w){    
    weapon = w;
}

void CounterTerrorist::mission()    {
    cout << "Counter Terrorist with weapon " << weapon << " | Task is " + TASK << endl;
}

CounterTerrorist::CounterTerrorist(){    
    type = "Counter";
}