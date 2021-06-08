#pragma once

#include "AbstractEmployee.h"

class Employer : public AbstractEmployee {
public:
   Employer(int level);
   void write(int amount);
};
