#ifndef SOLD_OUT_STATE_H
#define SOLD_OUT_STATE_H

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
   string print();
};

#endif

