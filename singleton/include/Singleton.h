#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

using namespace std;

class Singleton {
private:
   static Singleton *instance;
   int data; 
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
   
   int getData();
   void setData(int data);
};

#endif
