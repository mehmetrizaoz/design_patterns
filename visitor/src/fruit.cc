#include "fruit.h"
#include "shoppingCartVisitor.h"

fruit::fruit(int priceKg, int wt, string nm){
   pricePerKg = priceKg;
   weight = wt;
   name = nm;
}

int fruit::getPricePerKg(){
   return pricePerKg;
}

int fruit::getWeight(){
   return weight;
}

string fruit::getName(){
   return name;
}

int fruit::accept(shoppingCartVisitor &visitor){
   return visitor.visit(*this);;
}
