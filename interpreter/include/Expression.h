#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>

using namespace std;

class Expression{
public:
   Expression();
   virtual bool interpreter(string con)=0;
}

#endif
