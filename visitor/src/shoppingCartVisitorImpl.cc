#include "shoppingCartVisitorImpl.h"
#include "book.h"
#include "fruit.h"
#include <iostream>

using namespace std;

int shoppingCartVisitorImpl::visit(book &b){
   int cost = 0;
   if(b.getPrice() > 50){
       cost = b.getPrice() - 5;
   }
   else{
       cost = b.getPrice();
   }

   cout << "book isbn::" << b.getIsbnNumber() << " cost = " << cost << endl;
   return cost;
}

int shoppingCartVisitorImpl::visit(fruit &f){
   int cost = f.getPricePerKg() * f.getWeight();
   cout << f.getName() << " cost = " << cost << endl;
   return cost;
}
