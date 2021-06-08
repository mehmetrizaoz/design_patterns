#include "turnOnLightCommand.h"
#include <iostream>
#include "light.h"

using namespace std;

turnOnLightCommand::turnOnLightCommand(light l){
    lgt = l;
}

void turnOnLightCommand::execute(){
    cout << "turning on light" << endl;
    lgt.turnOn();
}