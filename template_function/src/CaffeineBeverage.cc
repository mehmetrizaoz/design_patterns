#include "CaffeineBeverage.h"
#include <iostream>

using namespace std;

void CaffeineBeverage::prepareRecipe() {
   boilWater();
   brew();
   pourInCup();
   addCondiments();
}

void CaffeineBeverage::boilWater() {
   cout << "Boiling water" << endl;
}

void CaffeineBeverage::pourInCup() {
   cout << "Pouring into cup" << endl;
}

void CaffeineBeverage::brew(){
   performBrew();
}

void CaffeineBeverage::addCondiments(){
   performAddCondiments();
}

