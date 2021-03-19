#ifndef ATTACKER_H
#define ATTACKER_H

#include "PlayerStrategy.h"

class Attacker : public PlayerStrategy{
public:
   void performShoot();
};

#endif