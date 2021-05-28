#pragma once

#include "itemElement.h"
#include "shoppingCartVisitor.h"
#include <string>

using namespace std;

class shoppingCartVisitor;

class book : itemElement{
public:
   book(int cost, string isbn);
   int getPrice();
   string getIsbnNumber();
   int accept(/*shoppingCartVisitor &visitor*/);
   
private:
   int price;
   string isbnNumber;   
};