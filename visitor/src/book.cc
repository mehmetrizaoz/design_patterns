#include "book.h"
#include "shoppingCartVisitor.h"

book::book(int cost, string isbn){
    price = cost;
    isbnNumber = isbn;
}

int book::getPrice(){
    return price;
}

string book::getIsbnNumber(){
    return isbnNumber;
}

int book::accept(shoppingCartVisitor &visitor){
    return visitor.visit(*this);
}
