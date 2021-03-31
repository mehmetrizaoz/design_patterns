#ifndef CAFFEE_H
#define CAFFEE_H

#include "CaffeineBeverage.h"

class Caffee : public CaffeineBeverage {
public:
   void performBrew();
   void performAddCondiments();
};

#endif
