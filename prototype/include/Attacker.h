#pragma once

#include "Player.h"

class Attacker : public Player {
public:   
   Player* clone() const;
   void attributes() const;   
};

