#include "RealCustomer.h"
#include "AbstractCustomer.h"

RealCustomer::RealCustomer(string n) {
   name = n;		
}
   
string RealCustomer::getName() {
   return name;
}
   
bool RealCustomer::isNil() {
   return false;
}



