#pragma once

#include "itemElement.h"
#include "shoppingCartVisitor.h"
#include <string>

using namespace std;

class shoppingCartVisitor;

class fruit : public itemElement{
public:
    fruit(int priceKg, int wt, string nm);
    int getPricePerKg();
    int getWeight();
    string getName();
    int accept(shoppingCartVisitor &visitor);
private:
    int pricePerKg;
    int weight;
    string name;
};

