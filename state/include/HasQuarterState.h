#ifndef HAS_QUARTER_STATE_H
#define HAS_QUARTER_STATE_H

#include "HasQuarterState.h"
#include "GumballMachine.h"

class HasQuarterState : public State {
public:
  GumballMachine *gumballMachine;
  HasQuarterState(GumballMachine *gM);
  void performInsertQuarter();
  void performEjectQuarter();
  void performTurnCrank();
  void performDispense();
};

#endif

