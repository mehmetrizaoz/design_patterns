#include "Player.h"

Player* Player::clone() const{
   return performClone();
}

void Player::attributes() const{
   performAttributes();
}

