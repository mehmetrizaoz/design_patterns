#include "Mocha.h"
#include "Beverage.h"

Mocha::Mocha(Beverage *beverage) {
    this->beverage = beverage;
}

string Mocha::getDescription() {
    return beverage->getDescription() + ", Mocha";
}

double Mocha::cost() {
    return .10 + beverage->cost();
}
