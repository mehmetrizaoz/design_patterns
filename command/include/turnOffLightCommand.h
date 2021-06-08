#pragma once

#include "light.h"
#include "icommand.h"
#include <iostream>

class turnOffLightCommand : public icommand{
public:
    light lgt;
    turnOffLightCommand(light l);
    void execute();
};