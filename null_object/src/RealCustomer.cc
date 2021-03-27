#include "RealCustomer.h"
#include "AbstractCustomer.h"

RealCustomer::RealCustomer(string n) {
   name = n;		
}
   
string RealCustomer::performGetName() {
   return name;
}
   
bool RealCustomer::performIsNil() {
   return false;
}



