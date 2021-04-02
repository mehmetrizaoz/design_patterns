#include "Player.h"
#include "Defender.h"
#include <iostream>

using namespace std;

Player* Defender::clone() const { 
    return new Defender;
}

void Defender::attributes() const { 
    cout << "Defender\n"; 
}
