#include <iostream>
#include "Employer.h"

using namespace std;

Employer::Employer(int l){
   level = l;
}

void Employer::write(int amount) {		
   cout << "I'm an Employer i can handle jobs upto 10.000$, amount to handle is " << amount << endl;
}


