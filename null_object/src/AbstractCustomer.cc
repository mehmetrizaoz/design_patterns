#include "AbstractCustomer.h"

bool AbstractCustomer::isNil(){
   return performIsNil();
}

string AbstractCustomer::getName(){
   return performGetName();
}


