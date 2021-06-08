#pragma once

#include "HasQuarterState.h"
#include "GumballMachine.h"
#include <string>

using namespace std;

class HasQuarterState : public State {
public:
  GumballMachine *gumballMachine;
  HasQuarterState(GumballMachine *gM);
  void performInsertQuarter();
  void performEjectQuarter();
  void performTurnCrank();
  void performDispense();
  void performPrint();
};



