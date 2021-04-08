#include <string>
#include "Beverage.h"
#include "DarkRoast.h"

DarkRoast::DarkRoast() {
   description = "Dark Roast Coffee";
}

double DarkRoast::cost() {
   return .99;
}