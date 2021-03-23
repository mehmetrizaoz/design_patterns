#ifndef ABSTRACT_EMPLOYEE_H
#define ABSTRACT_EMPLOYEE_H

#include <cstddef>

class AbstractEmployee {
public:
   static int LOW;
   static int MIDDLE;
   static int HIGH;

   int level;
   AbstractEmployee *nextLevel = NULL;

   void setNextLevel(AbstractEmployee *nextLevel);
   void handleJob(int amount);

   virtual void write(int amount)=0;
};

#endif
