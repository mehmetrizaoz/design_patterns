#include "homeAutomationRemote.h"
#include "icommand.h"


void homeAutomationRemote::setCommand(icommand *cm){
   this->cmd = cm;
}

void homeAutomationRemote::buttonPressed(){
    cmd->execute();
}