#ifndef TEA_H
#define TEA_H

#include "CaffeineBeverage.h"

class Tea : public CaffeineBeverage {
public:
   void performBrew();
   void performAddCondiments();
};

#endif
