#pragma once

#include "icommand.h"

class homeAutomationRemote{
public:
    icommand *cmd;
    void setCommand(icommand *cm);
    void buttonPressed();
};