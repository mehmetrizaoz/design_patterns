#include "Soy.h"
#include "Beverage.h"

Soy::Soy(Beverage *beverage) {
    this->beverage = beverage;
}

string Soy::getDescription() {
    return beverage->getDescription() + ", Soy";
}

double Soy::cost() {
    return .10 + beverage->cost();
}
