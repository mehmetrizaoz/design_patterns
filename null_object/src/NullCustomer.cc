#include "NullCustomer.h"
#include "AbstractCustomer.h"

  
string NullCustomer::performGetName() {
   return "Not Available in Customer Database";   
}
   
bool NullCustomer::performIsNil() {
   return true;
}



