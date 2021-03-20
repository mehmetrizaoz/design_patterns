#ifndef NO_QUARTER_STATE_H
#define NO_QUARTER_STATE_H

#include "State.h"
#include "NoQuarterState.h"
#include "GumballMachine.h"

class NoQuarterState : public State {
public:
  GumballMachine *gumballMachine;
  NoQuarterState(GumballMachine *gM);
   void performInsertQuarter();
   void performEjectQuarter();
   void performTurnCrank();
   void performDispense();
};

#endif

