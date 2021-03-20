#include <iostream>
#include "NoQuarterState.h"

using namespace std;

NoQuarterState::NoQuarterState(GumballMachine *gM) {
   gumballMachine = gM;
}

void NoQuarterState::performInsertQuarter() {
   cout << "You inserted a quarter" << endl;
gumballMachine->setState(gumballMachine->getHasQuarterState());   
}

void NoQuarterState::performEjectQuarter() {
   cout << "You haven't inserted a quarter" << endl;
}

void NoQuarterState::performTurnCrank() {
   cout << "You turned, but there's no quarter" << endl;
}

void NoQuarterState::performDispense() {
   cout << "You need to pay first" << endl;
}

void NoQuarterState::performPrint() {
	cout << "waiting for quarter" << endl;
}



