#pragma once

#include "book.h"
#include "fruit.h"
#include "shoppingCartVisitor.h"

class book;

class shoppingCartVisitorImpl : public shoppingCartVisitor{
public:
  int visit(book &b);
  int visit(fruit &f);
};