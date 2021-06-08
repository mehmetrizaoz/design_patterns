#pragma once

#include <string>

using namespace std;

class Expression{
public:
   virtual bool interpreter(string con)=0;
};


