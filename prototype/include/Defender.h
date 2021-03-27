#ifndef DEFENDER_H
#define DEFENDER_H

#include "Player.h"

class Defender : public Player {
public:   
   Player* performClone() const;
   void performAttributes() const;   
};

#endif