#include <iostream>
#include "Director.h"

using namespace std;

Director::Director(int l){
   level = l;
}

void Director::write(int amount) {		
   cout << "I'm a Director i can handle jobs more than 20.000$, amount to handle is " << amount << endl;
}


