#ifndef ABSTRACT_CUSTOMER_H
#define ABSTRACT_CUSTOMER_H

#include <string>

using namespace std;

class AbstractCustomer {
public:
   bool isNil();
   string getName();
   string name;
private:
   virtual bool performIsNil() = 0;
   virtual string performGetName() = 0;   
};


#endif
