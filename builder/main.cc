#include <vector>
#include <string>
#include <iostream>
#include "user.h"
#include "userBuilder.h"

using namespace std;

int main() {
    userBuilder *ub = new userBuilder("Lokesh", "Gupta");
    ub->age = 30;
    ub->phone = "1234567";
    ub->address = "Fake address 1234";
    ub->build();

    user us = user(ub);
    us.print();
 



    return EXIT_SUCCESS;
}
