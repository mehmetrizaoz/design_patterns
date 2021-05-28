#pragma once

class shoppingCartVisitor;

class itemElement{
public:
   virtual int accept(shoppingCartVisitor &visitor) = 0;   
};