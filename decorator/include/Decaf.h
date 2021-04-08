#ifndef DECAF_H
#define DECAF_H

#include <string>
#include "Beverage.h"

using namespace std;

class Decaf : public Beverage {
public:
   Decaf();
   double cost() override;
};

#endif