#include "Terrorist.h"
#include <string>
#include <iostream>

using namespace std;

void Terrorist::performAssignWeapon(string w){    
    weapon = w;
}

void Terrorist::performMission()    {
    cout << "Terrorist with weapon " << weapon << " | Task is " + TASK << endl;
}

Terrorist::Terrorist(){
    type = "Terrorist";
}