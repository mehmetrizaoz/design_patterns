#pragma once

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
   void performPrint();   
};



