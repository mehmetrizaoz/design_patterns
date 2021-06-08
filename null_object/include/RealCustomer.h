#pragma once

#include <string>
#include "AbstractCustomer.h"

using namespace std;

class RealCustomer : public AbstractCustomer {
public:
   RealCustomer(string name);
   string getName();
   bool isNil();   
};


