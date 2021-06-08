#pragma once

#include "AbstractCustomer.h"
#include <string>
#include <vector>

using namespace std;

class CustomerFactory {
public:	
   static const vector<string> names;
   static AbstractCustomer *getCustomer(string name);
};

