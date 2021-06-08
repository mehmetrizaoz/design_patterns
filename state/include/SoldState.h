#pragma once

#include "SoldState.h"
#include "GumballMachine.h"
#include <string>

using namespace std;

class SoldState : public State {
public:
  GumballMachine *gumballMachine;
  SoldState(GumballMachine *gM);
   void performInsertQuarter();
   void performEjectQuarter();
   void performTurnCrank();
   void performDispense();
   void performPrint();   
};



