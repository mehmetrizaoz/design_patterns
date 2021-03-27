#ifndef NULL_CUSTOMER_H
#define NULL_CUSTOMER_H

#include <string>
#include "AbstractCustomer.h"

using namespace std;

class NullCustomer : public AbstractCustomer {
public:
   string performGetName();
   bool performIsNil();   
};

#endif
