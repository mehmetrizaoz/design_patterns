#ifndef REAL_CUSTOMER_H
#define REAL_CUSTOMER_H

#include <string>
#include "AbstractCustomer.h"

using namespace std;

class RealCustomer : public AbstractCustomer {
public:
   RealCustomer(string name);
   string performGetName();
   bool performIsNil();   
};

#endif
