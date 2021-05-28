#pragma once

#include "book.h"
#include "fruit.h"

class book;
class fruit;

class shoppingCartVisitor{
public:
   virtual int visit(fruit &f) = 0;
   virtual int visit(book &b) = 0;  
   //shoppingCartVisitor();
};