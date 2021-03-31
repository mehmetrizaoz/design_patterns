#ifndef POPCORN_H
#define POPCORN_H

#include <string>

using namespace std;

class PopcornPopper {
public:   
   string description;
   PopcornPopper(string description);
   void on();
   void off();
   void pop();
   string toString();
};

#endif
