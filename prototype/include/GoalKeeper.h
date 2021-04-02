#ifndef GOALKEEPER_H
#define GOALKEEPER_H

#include "Player.h"

class GoalKeeper : public Player {
public:   
   Player* clone() const;
   void attributes() const;   
};

#endif