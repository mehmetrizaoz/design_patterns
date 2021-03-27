#include "Player.h"
#include "Attacker.h"
#include <iostream>

using namespace std;

Player* Attacker::performClone() const { 
    return new Attacker;
}

void Attacker::performAttributes() const { 
    cout << "Attacker\n"; 
}
