#ifndef MILK_H
#define MILK_H

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

#endif