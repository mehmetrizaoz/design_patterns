#ifndef MIDFIELDER_H
#define MIDFIELDER_H

#include "Player.h"

class Midfielder : public Player {
public:   
   Player* clone() const;
   void attributes() const;   
};

#endif