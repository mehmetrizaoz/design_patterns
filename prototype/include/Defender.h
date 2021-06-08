#pragma once

#include "Player.h"

class Defender : public Player {
public:   
   Player* clone() const;
   void attributes() const;   
};

