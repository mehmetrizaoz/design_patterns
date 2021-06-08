#pragma once

#include "CondimentDecorator.h"
#include <string>
#include "Beverage.h"

using namespace std;

class Soy : public CondimentDecorator {
public:
   Beverage *beverage;
   Soy(Beverage *beverage);
   string getDescription();
   double cost();
};
