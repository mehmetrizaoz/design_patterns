#pragma once

#include <string>

using namespace std;

class AbstractCustomer {
public:
   string name;
   virtual bool isNil() = 0;
   virtual string getName() = 0;   
};

