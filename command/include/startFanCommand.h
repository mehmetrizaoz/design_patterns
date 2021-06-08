#pragma once

#include "fan.h"
#include <iostream>
#include "icommand.h"

class startFanCommand : public icommand{
public:
    fan fn;
    startFanCommand(fan f);
    void execute();
};