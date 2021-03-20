#ifndef NO_QUARTER_STATE_H
#define NO_QUARTER_STATE_H

#include "NoQuarterState.h"
#include "GumballMachine.h"
#include <string>

using namespace std;

class NoQuarterState : public State {
public:
  GumballMachine *gumballMachine;
  NoQuarterState(GumballMachine *gM);
   void performInsertQuarter();
   void performEjectQuarter();
   void performTurnCrank();
   void performDispense();
   string print();   
};

#endif

