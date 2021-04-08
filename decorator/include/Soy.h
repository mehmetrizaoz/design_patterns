#ifndef SOY_H
#define SOY_H

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

#endif