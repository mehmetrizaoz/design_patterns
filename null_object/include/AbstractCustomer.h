#ifndef ABSTRACT_CUSTOMER_H
#define ABSTRACT_CUSTOMER_H

#include <string>

using namespace std;

class AbstractCustomer {
public:
   AbstractCustomer();
   string name;
   virtual bool isNil() = 0;
   virtual string getName() = 0;   
};


#endif
