#ifndef ATTACKER_H
#define ATTACKER_H

#include "Player.h"

class Attacker : public Player {
public:   
   Player* performClone() const;
   void performAttributes() const;   
};

#endif