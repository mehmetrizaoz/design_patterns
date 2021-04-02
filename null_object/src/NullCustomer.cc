#include "NullCustomer.h"
#include "AbstractCustomer.h"

  
string NullCustomer::getName() {
   return "Not Available in Customer Database";   
}
   
bool NullCustomer::isNil() {
   return true;
}



