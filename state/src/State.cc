#include "State.h"
#include <iostream>

using namespace std;

void State::insertQuarter(){ 
   performInsertQuarter();
}

void State::ejectQuarter(){ 
   performEjectQuarter();
}

void State::turnCrank(){ 
   performTurnCrank();
}

void State::dispense(){ 
   performDispense();
}

void State::print(){    
   performPrint();
}

