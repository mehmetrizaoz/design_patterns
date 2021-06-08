#pragma once

#include <string>
#include "Beverage.h"

using namespace std;

class Decaf : public Beverage {
public:
   Decaf();
   double cost() override;
};
