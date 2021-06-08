#pragma once

#include "CondimentDecorator.h"
#include <string>
#include "Beverage.h"

using namespace std;

class Whip : public CondimentDecorator {
public:
   Beverage *beverage;
   Whip(Beverage *beverage);
   string getDescription();
   double cost();
};
