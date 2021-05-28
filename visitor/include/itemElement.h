#pragma once

//#include "shoppingCartVisitor.h"

class shoppingCartVisitor;

class itemElement{
public:
   virtual int accept(/*shoppingCartVisitor &visitor*/) = 0;   
   itemElement();
};