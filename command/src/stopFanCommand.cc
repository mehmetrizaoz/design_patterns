#include "stopFanCommand.h"
#include <iostream>
#include "fan.h"

using namespace std;

stopFanCommand::stopFanCommand(fan l){
    fn = l;
}

void stopFanCommand::execute(){
    cout << "stopping fan" << endl;
    fn.stop();
}