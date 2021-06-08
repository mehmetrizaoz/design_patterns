#include "startFanCommand.h"
#include <iostream>
#include "fan.h"

using namespace std;

startFanCommand::startFanCommand(fan l){
    fn = l;
}

void startFanCommand::execute(){
    cout << "starting fan" << endl;
    fn.start();
}