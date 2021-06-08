#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "itemElement.h"
#include "book.h"
#include "fruit.h"
#include "shoppingCartVisitor.h"
#include "shoppingCartVisitorImpl.h"

using namespace std;

int main() {
    vector<itemElement *> ie;
    book b1 = book(20, "1234");
    book b2 = book(10, "3465");
    fruit f1 = fruit(5, 5, "apple");

    ie.push_back(&b1);
    ie.push_back(&b2);
    ie.push_back(&f1);

    shoppingCartVisitor *visitor = new shoppingCartVisitorImpl();
    int sum = 0;

    for(auto it = ie.begin(); it < ie.end(); it++){
        sum += (*it)->accept(*visitor);
    }

    cout << "sum: " << sum << endl;

    return EXIT_SUCCESS;
}
