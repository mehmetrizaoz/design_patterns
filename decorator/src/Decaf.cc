#include <string>
#include "Beverage.h"
#include "Decaf.h"

Decaf::Decaf() {
   description = "Decaf Coffee";
}

double Decaf::cost() {
   return 1.05;
}