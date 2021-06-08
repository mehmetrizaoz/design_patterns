#pragma once

class State{ 
public:
   void insertQuarter();
   void ejectQuarter();
   void turnCrank();
   void dispense(); 
   void print();
private:
   virtual void performInsertQuarter()=0;
   virtual void performEjectQuarter()=0;
   virtual void performTurnCrank()=0;
   virtual void performDispense()=0;
   virtual void performPrint()=0;
};
   


