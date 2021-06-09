#include "user.h"
#include "userBuilder.h"
#include <string>
#include <iostream>

using namespace std;

user::user(userBuilder builder) {
    this->firstName = builder.firstName;
    this->lastName = builder.lastName;
    this->age = builder.age;
    this->phone = builder.phone;
    this->address = builder.address;
}

string user::getFirstName() {
    return firstName;
}

string user::getLastName() {
    return lastName;
}
int user::getAge() {
    return age;
}
string user::getPhone() {
    return phone;
}
string user::getAddress() {
    return address;
}

void user::print() {
    cout << "User: " << this->firstName << ", " << this->lastName << ", " << this->age;
    cout << ", " << this->phone << ", " << this->address << endl;
}
