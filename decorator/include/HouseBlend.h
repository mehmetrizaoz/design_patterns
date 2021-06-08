#pragma once

#include <string>
#include "Beverage.h"

using namespace std;

class HouseBlend : public Beverage {
public:  
	HouseBlend();
	double cost();
};
