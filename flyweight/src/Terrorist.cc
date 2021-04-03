#include "Terrorist.h"
#include <string>
#include <iostream>

using namespace std;

void Terrorist::assignWeapon(string w){    
    weapon = w;
}

void Terrorist::mission()    {
    cout << "Terrorist with weapon " << weapon << " | Task is " + TASK << endl;
}

Terrorist::Terrorist(){
    type = "Terrorist";
}