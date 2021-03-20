#include <iostream>
#include "SoldState.h"

using namespace std;

SoldState::SoldState(GumballMachine *gM) {
   gumballMachine = gM;
}

void SoldState::performInsertQuarter() {
   cout << "Please wait, we're already giving you a gumball" << endl;
}

void SoldState::performEjectQuarter() {
   cout << "Sorry, you already turned the crank" << endl;
}

void SoldState::performTurnCrank() {
   cout << "Turning twice doesn't get you another gumball!" << endl;
}

void SoldState::performDispense() {
   gumballMachine->releaseBall();
   if (gumballMachine->getCount() > 0) {
      gumballMachine->setState(gumballMachine->getNoQuarterState());
   } else {
      cout << "Oops, out of gumballs!";
      gumballMachine->setState(gumballMachine->getSoldOutState());
   }
}




