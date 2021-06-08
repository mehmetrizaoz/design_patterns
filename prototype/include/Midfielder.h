#pragma once

#include "Player.h"

class Midfielder : public Player {
public:   
   Player* clone() const;
   void attributes() const;   
};

