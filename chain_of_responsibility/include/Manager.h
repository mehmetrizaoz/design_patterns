#pragma once

#include "AbstractEmployee.h"

class Manager : public AbstractEmployee {
public:
   Manager(int level);
   void write(int amount);
};
