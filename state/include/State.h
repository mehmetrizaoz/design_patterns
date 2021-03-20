#ifndef STATE_H
#define STATE_H

class State{ 
public:
   void insertQuarter();
   void ejectQuarter();
   void turnCrank();
   void dispense();            
private:
   virtual void performInsertQuarter();
   virtual void performEjectQuarter();
   virtual void performTurnCrank();
   virtual void performDispense();         
};
   
#endif

