#pragma once

#include "Player.h"

class GoalKeeper : public Player {
public:   
   Player* clone() const;
   void attributes() const;   
};

