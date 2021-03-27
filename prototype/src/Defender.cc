#include "Player.h"
#include "Defender.h"
#include <iostream>

using namespace std;

Player* Defender::performClone() const { 
    return new Defender;
}

void Defender::performAttributes() const { 
    cout << "Defender\n"; 
}
