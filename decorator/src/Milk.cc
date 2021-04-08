#include "Milk.h"
#include "Beverage.h"

Milk::Milk(Beverage *beverage) {
    this->beverage = beverage;
}

string Milk::getDescription() {
    return beverage->getDescription() + ", Milk";
}

double Milk::cost() {
    return .10 + beverage->cost();
}
