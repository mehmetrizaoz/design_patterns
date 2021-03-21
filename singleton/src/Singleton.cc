#include <iostream>
#include "Singleton.h"

using namespace std;

 

int Singleton::getData() {
   return this -> data;
}

void Singleton::setData(int data) {
   this -> data = data;
}

Singleton *Singleton::instance = 0;