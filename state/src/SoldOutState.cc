#include <iostream>
#include "SoldOutState.h"

using namespace std;

SoldOutState::SoldOutState(GumballMachine *gM) {
   gumballMachine = gM;
}

void SoldOutState::performInsertQuarter() {
   cout << "You can't insert a quarter, the machine is sold out" << endl;
}

void SoldOutState::performEjectQuarter() {
   cout << "You can't eject, you haven't inserted a quarter yet" << endl;
}

void SoldOutState::performTurnCrank() {
   cout << "You turned, but there are no gumballs" << endl;
}

void SoldOutState::performDispense() {
   cout << "No gumball dispensed" << endl;
}

string SoldOutState::print() {
	return "sold out";
}


