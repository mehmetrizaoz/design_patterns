#ifndef DARK_ROAST_H
#define DARK_ROAST_H

#include <string>
#include "Beverage.h"

using namespace std;

class DarkRoast : public Beverage {
public:
   DarkRoast();
   double cost() override;
};

#endif