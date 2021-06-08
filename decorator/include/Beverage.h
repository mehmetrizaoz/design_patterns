#pragma once

#include <string>

using namespace std;

class Beverage {
public:
   string description = "Unknown Beverage";
   string getDescription(); 
   virtual double cost()=0;
};
