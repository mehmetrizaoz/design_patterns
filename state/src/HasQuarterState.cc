#include <iostream>
#include "HasQuarterState.h"

using namespace std;

HasQuarterState::HasQuarterState(GumballMachine *gM) {
   gumballMachine = gM;
}

void HasQuarterState::performInsertQuarter() {
   cout << "You can't insert another quarter" << endl;
}

void HasQuarterState::performEjectQuarter() {
   cout << "Quarter returned" << endl;
   gumballMachine->setState(gumballMachine->getNoQuarterState());
   
}

void HasQuarterState::performTurnCrank() {
   cout << "You turned..." << endl;
   gumballMachine->setState(gumballMachine->getSoldState());
}

void HasQuarterState::performDispense() {
   cout << "No gumball dispensed" << endl;
}




