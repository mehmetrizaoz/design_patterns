#pragma once

#include "light.h"
#include <iostream>
#include "icommand.h"

class turnOnLightCommand : public icommand{
public:
    light lgt;
    turnOnLightCommand(light l);
    void execute();
};