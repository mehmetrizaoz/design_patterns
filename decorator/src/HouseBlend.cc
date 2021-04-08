#include <string>
#include "Beverage.h"
#include "HouseBlend.h"

HouseBlend::HouseBlend() {
   description = "House Blend Coffee";
}

double HouseBlend::cost() {
   return .89;
}