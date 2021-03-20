#include <iostream>
#include "GumballMachine.h"
#include "HasQuarterState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"
#include "SoldState.h"

using namespace std;

GumballMachine::GumballMachine(int numberGumballs) {
   soldOutState = new SoldOutState(this);
   noQuarterState = new NoQuarterState(this);
   hasQuarterState = new HasQuarterState(this);
   soldState = new SoldState(this);

   count = numberGumballs;
   if (numberGumballs > 0) {
      state = noQuarterState;
   } 
}
 
void GumballMachine::insertQuarter() {
   state->insertQuarter();
}
 
void GumballMachine::ejectQuarter() {
   state->ejectQuarter();
}
 
void GumballMachine::turnCrank() {
   state->turnCrank();
   state->dispense();
}

void GumballMachine::setState(State *st) {
   state = st;
}
 
void GumballMachine::releaseBall() {
   cout << "A gumball comes rolling out the slot..." << endl;
   if (count != 0) {
      count = count - 1;
   }
}
 
int GumballMachine::getCount() {
   return count;
}
 
void GumballMachine::refill(int count) {
   count = count;
   state = noQuarterState;
}

State *GumballMachine::getState() {
   return state;
}

State *GumballMachine::getHasQuarterState() {
   return hasQuarterState;
}

State *GumballMachine::getNoQuarterState() {
   return noQuarterState;
}

State *GumballMachine::getSoldOutState() {
   return soldOutState;
}

State *GumballMachine::getSoldState() {
   return soldState;
}




