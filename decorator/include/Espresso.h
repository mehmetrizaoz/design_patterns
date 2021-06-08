#pragma once

#include <string>
#include "Beverage.h"

using namespace std;

class Espresso : public Beverage {
public:  
	Espresso();
	double cost();
};
