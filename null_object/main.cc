#include <vector>
#include <algorithm>
#include <iostream>
#include "CustomerFactory.h"
#include "AbstractCustomer.h"
#include "RealCustomer.h"
#include "NullCustomer.h"


using namespace std;

int main(){
   AbstractCustomer *customer1 = CustomerFactory::getCustomer("Rob");
   AbstractCustomer *customer2 = CustomerFactory::getCustomer("Bob");
   AbstractCustomer *customer3 = CustomerFactory::getCustomer("Julie");
   AbstractCustomer *customer4 = CustomerFactory::getCustomer("Laura");
   
   cout << customer1->getName() << endl;
   cout << customer2->getName() << endl;
   cout << customer3->getName() << endl;
   cout << customer4->getName() << endl;

   return 0;
}










