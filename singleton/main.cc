#include <iostream>
#include "Singleton.h"

using namespace std;

int main(){
   Singleton *s = s->getInstance();
   cout << s->getData() << endl;
   s->setData(100);
   cout << s->getData() << endl;

   Singleton *m = m->getInstance();
   return 0;
}










