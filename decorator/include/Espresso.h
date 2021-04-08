#ifndef EXPRESSO_H
#define EXPRESSO_H

#include <string>
#include "Beverage.h"

using namespace std;

class Espresso : public Beverage {
public:  
	Espresso();
	double cost();
};


#endif