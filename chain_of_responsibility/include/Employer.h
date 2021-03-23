#ifndef EMPLOYER_H
#define EMPLOYER_H

#include "AbstractEmployee.h"

class Employer : public AbstractEmployee {
public:
   Employer(int level);
   void write(int amount);
};

#endif
