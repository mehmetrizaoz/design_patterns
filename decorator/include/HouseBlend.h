#ifndef HOUSE_BLEND_H
#define HOUSE_BLEND_H

#include <string>
#include "Beverage.h"

using namespace std;

class HouseBlend : public Beverage {
public:  
	HouseBlend();
	double cost();
};


#endif