#pragma once

#include "State.h"
#include <string>

using namespace std;

class GumballMachine
{
private:
   int count = 0;
   State *state = soldOutState;

   State *hasQuarterState;
   State *noQuarterState;   
   State *soldOutState;
   State *soldState;      

public:
   string print();
   GumballMachine(int numberGumballs);
   void insertQuarter();
   void ejectQuarter();
   void turnCrank();
   void setState(State *st);
   void releaseBall();
   int getCount();
   void refill(int count);
   State *getState();
   State *getHasQuarterState();
   State *getNoQuarterState(); 
   State *getSoldOutState();
   State *getSoldState();
}; 
   


