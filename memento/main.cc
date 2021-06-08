#include <vector>
#include <string>
#include <iostream>
#include "article.h"
#include "articleMemento.h"

using namespace std;

int main() {

    article *art = new article(1, "My Article");
    art->content = "ABC";
    art->id = 1;
    art->title = "first";
    art->print();
            
    articleMemento mmt = art->createMemento();
        
    art->content = "123";
    art->id = 3;
    art->title = "changed";
    art->print();
        
    art->restore(mmt);
    art->print();

    return EXIT_SUCCESS;
}
