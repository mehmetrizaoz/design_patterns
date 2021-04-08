#ifndef CONDIMENT_DECORATOR_H
#define CONDIMENT_DECORATOR_H

#include "Beverage.h"
#include <string>

using namespace std;

class CondimentDecorator : public Beverage {
public:    
	virtual string getDescription()=0;
    CondimentDecorator();
};


#endif