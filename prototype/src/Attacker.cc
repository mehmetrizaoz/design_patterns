#include "Player.h"
#include "Attacker.h"
#include <iostream>

using namespace std;

Player* Attacker::clone() const { 
    return new Attacker;
}

void Attacker::attributes() const { 
    cout << "Attacker\n"; 
}
