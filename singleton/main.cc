#include <iostream>
#include "Singleton.h"

using namespace std;

class Singleton {
   static Singleton *instance;
   int data;
 
   // Private constructor so that no objects can be created.
   Singleton() {
      data = 0;
   }

   public:
   static Singleton *getInstance() {
      if (!instance)
         instance = new Singleton;
      else
         cout << "no instance creation" << endl;
      return instance;
   }

   int getData() {
      return this -> data;
   }

   void setData(int data) {
      this -> data = data;
   }
};

Singleton *Singleton::instance = 0;

int main(){
   Singleton *s = s->getInstance();
   cout << s->getData() << endl;
   s->setData(100);
   cout << s->getData() << endl;

   Singleton *m = m->getInstance();
   return 0;
}










