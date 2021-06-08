#pragma once

#include <cstddef>

class AbstractEmployee {
public:
   int level;
   AbstractEmployee *nextLevel = NULL;
   void setNextLevel(AbstractEmployee *nextLevel);
   void handleJob(int amount);
   virtual void write(int amount)=0;
};
