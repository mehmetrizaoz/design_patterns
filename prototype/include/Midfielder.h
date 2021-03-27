#ifndef MIDFIELDER_H
#define MIDFIELDER_H

#include "Player.h"

class Midfielder : public Player {
public:   
   Player* performClone() const;
   void performAttributes() const;   
};

#endif