#ifndef MANAGER_H
#define MANAGER_H

#include "AbstractEmployee.h"

class Manager : public AbstractEmployee {
public:
   Manager(int level);
   void write(int amount);
};

#endif
