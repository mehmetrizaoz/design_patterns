#ifndef GOALKEEPER_H
#define GOALKEEPER_H

#include "Player.h"

class GoalKeeper : public Player {
public:   
   Player* performClone() const;
   void performAttributes() const;   
};

#endif