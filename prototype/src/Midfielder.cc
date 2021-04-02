#include "Player.h"
#include "Midfielder.h"
#include <iostream>

using namespace std;

Player* Midfielder::clone() const { 
    return new Midfielder;
}

void Midfielder::attributes() const { 
    cout << "Midfielder\n"; 
}
