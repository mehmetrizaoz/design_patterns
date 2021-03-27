#ifndef CUSTOMER_FACTORY_H
#define CUSTOMER_FACTORY_H

#include "AbstractCustomer.h"
#include <string>
#include <vector>

using namespace std;

class CustomerFactory {
public:	
   static const vector<string> names;
   static AbstractCustomer *getCustomer(string name);
};

#endif