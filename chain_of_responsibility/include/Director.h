#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "AbstractEmployee.h"

class Director : public AbstractEmployee {
public:
   Director(int level);
   void write(int amount);
};

#endif
