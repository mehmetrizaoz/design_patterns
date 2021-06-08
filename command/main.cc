#include <vector>
#include <string>
#include <iostream>
#include "fan.h"
#include "light.h"
#include "homeAutomationRemote.h"
#include "startFanCommand.h"
#include "stopFanCommand.h"
#include "turnOffLightCommand.h"
#include "turnOnLightCommand.h"

using namespace std;

int main() {

        light *livingRoomLight = new light();
        fan *livingRoomFan = new fan();
        light *bedRoomLight = new light(); 
        fan *bedRoomFan = new fan();
 
        homeAutomationRemote *remote = new homeAutomationRemote();
        
        remote->setCommand(new turnOnLightCommand(*livingRoomLight));
        remote->buttonPressed();
 
        remote->setCommand(new turnOnLightCommand(*bedRoomLight));
        remote->buttonPressed();
 
        remote->setCommand(new startFanCommand(*livingRoomFan));
        remote->buttonPressed();
 
        remote->setCommand(new stopFanCommand(*livingRoomFan));
        remote->buttonPressed();
 
        remote->setCommand(new startFanCommand(*bedRoomFan));
        remote->buttonPressed();
 
        remote->setCommand(new stopFanCommand(*bedRoomFan));
        remote->buttonPressed();

    return EXIT_SUCCESS;
}
