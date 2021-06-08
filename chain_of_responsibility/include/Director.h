#pragma once

#include "AbstractEmployee.h"

class Director : public AbstractEmployee {
public:
   Director(int level);
   void write(int amount);
};

