#pragma once

#include "CondimentDecorator.h"
#include <string>
#include "Beverage.h"

using namespace std;

class Milk : public CondimentDecorator {
public:
   Beverage *beverage;
   Milk(Beverage *beverage);
   string getDescription();
   double cost();
};
