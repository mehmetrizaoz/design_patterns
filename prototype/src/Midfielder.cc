#include "Player.h"
#include "Midfielder.h"
#include <iostream>

using namespace std;

Player* Midfielder::performClone() const { 
    return new Midfielder;
}

void Midfielder::performAttributes() const { 
    cout << "Midfielder\n"; 
}
