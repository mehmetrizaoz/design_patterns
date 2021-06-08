#include "turnOffLightCommand.h"
#include <iostream>
#include "light.h"

using namespace std;

turnOffLightCommand::turnOffLightCommand(light l){
    lgt = l;
}

void turnOffLightCommand::execute(){
    cout << "turning off light" << endl;
    lgt.turnOff();
}