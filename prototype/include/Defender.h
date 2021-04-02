#ifndef DEFENDER_H
#define DEFENDER_H

#include "Player.h"

class Defender : public Player {
public:   
   Player* clone() const;
   void attributes() const;   
};

#endif