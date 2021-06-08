#pragma once

#include "PlayerStrategy.h"

class Player{
public:
   PlayerStrategy *pS = nullptr;
   void performShoot();
   void setPlayerStrategy(PlayerStrategy *fB);
   //other functions
   void sprint ();  
   virtual void describe() = 0;
   ~Player();
};


