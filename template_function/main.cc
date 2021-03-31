#include <iostream>
#include "Tea.h"
#include "Caffee.h"

using namespace std;

int main() {    
	Tea *tea = new Tea();
	Caffee *coffee = new Caffee();
 
	cout << "Making tea..." << endl;
	tea->prepareRecipe();
 
	cout << endl << "Making coffee..." << endl;
	coffee->prepareRecipe();     

   return 0;
}
