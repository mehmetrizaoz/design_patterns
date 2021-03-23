#include "AbstractEmployee.h"
#include <cstddef>

void AbstractEmployee::setNextLevel(AbstractEmployee *nL){
   nextLevel = nL;
}

void AbstractEmployee::handleJob(int amount){      
   if(level > amount || nextLevel == NULL){
      write(amount);        
   }
   else if(nextLevel != NULL){
      nextLevel->handleJob(amount);
   }
}



