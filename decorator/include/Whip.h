#ifndef WHIP_H
#define WHIP_H

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

#endif