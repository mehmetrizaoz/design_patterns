#pragma once

#include "fan.h"
#include <iostream>
#include "icommand.h"

class stopFanCommand : public icommand{
public:
    fan fn;
    stopFanCommand(fan f);
    void execute();
};