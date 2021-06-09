#include <vector>
#include <string>
#include <iostream>
#include "user.h"
#include "userBuilder.h"

using namespace std;

int main() {
    userBuilder ub = userBuilder("Lokesh", "Gupta");
    ub.setAge(30).setPhone("1234567").setAddress("Fake address 1234").build();    
    user us = user(ub);
    us.print();

    userBuilder ub2 = userBuilder("Ahmet", "Özdemir");
    ub2.setAge(30).setPhone("773662").build();
    user us2 = user(ub2);    
    us2.print();
 

    return EXIT_SUCCESS;
}
