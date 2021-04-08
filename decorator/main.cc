#include <iostream>
#include "Beverage.h"
#include "Espresso.h"
#include "DarkRoast.h"
#include "Mocha.h"
#include "Whip.h"
#include "Soy.h"
#include "HouseBlend.h"

using namespace std;

int main(){
   Beverage *beverage = new Espresso();
   cout << beverage->getDescription() <<  " $" <<  beverage->cost() << endl;

   Beverage *beverage2 = new DarkRoast();
   beverage2 = new Mocha(beverage2);
   beverage2 = new Mocha(beverage2);
   beverage2 = new Whip(beverage2);
   cout << beverage2->getDescription() <<  " $" <<  beverage2->cost() << endl;

   Beverage *beverage3 = new HouseBlend();
   beverage3 = new Soy(beverage3);
   beverage3 = new Mocha(beverage3);
   beverage3 = new Whip(beverage3);
   cout << beverage3->getDescription() <<  " $" <<  beverage3->cost() << endl;


   return 0;
}



