#pragma once

#include <string>
#include "Beverage.h"

using namespace std;

class DarkRoast : public Beverage {
public:
   DarkRoast();
   double cost() override;
};
