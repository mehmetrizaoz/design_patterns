#pragma once

#include "SoldOutState.h"
#include "GumballMachine.h"
#include <string>

using namespace std;

class SoldOutState : public State {
public:
  GumballMachine *gumballMachine;
  SoldOutState(GumballMachine *gM);
   void performInsertQuarter();
   void performEjectQuarter();
   void performTurnCrank();
   void performDispense();
   void performPrint();
};



