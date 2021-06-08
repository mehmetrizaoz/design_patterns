#pragma once

#include "Beverage.h"
#include <string>

using namespace std;

class CondimentDecorator : public Beverage {
public:    
	virtual string getDescription()=0;
    CondimentDecorator();
};
