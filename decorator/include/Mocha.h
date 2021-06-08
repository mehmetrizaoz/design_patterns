#pragma once

#include "CondimentDecorator.h"
#include <string>
#include "Beverage.h"

using namespace std;

class Mocha : public CondimentDecorator {
public:
   Beverage *beverage;
   Mocha(Beverage *beverage);
   string getDescription();
   double cost();
};
