#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "itemElement.h"
#include "book.h"
#include "fruit.h"
#include "shoppingCartVisitor.h"

using namespace std;

int main() {
    vector<itemElement *> ie;
    book b1 = book(20, "1234");
    book b2 = book(10, "3465");
    fruit f1 = fruit(5, 5, "apple");

    ie.push_back(&b1);
    ie.push_back(&b2);
    ie.push_back(&f1);

    shoppingCartVisitor visitor = shoppingCartVisitor();
    


    return EXIT_SUCCESS;
}
