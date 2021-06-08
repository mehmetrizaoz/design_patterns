#pragma once

#include <string>
#include "AbstractCustomer.h"

using namespace std;

class NullCustomer : public AbstractCustomer {
public:
   string getName();
   bool isNil();   
};


