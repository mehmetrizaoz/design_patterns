#include "userBuilder.h"
#include "user.h"
#include <string>

using namespace std;

userBuilder::userBuilder(string first, string last) {
    this->firstName = first;
    this->lastName = last;
}

userBuilder& userBuilder::setAge(int age) {    
    this->age = age;
    return *this;
}
userBuilder& userBuilder::setPhone(string phone) {
    this->phone = phone;
    return *this;
}
userBuilder& userBuilder::setAddress(string address) {
    this->address = address;
    return *this;
}

user userBuilder::build() {
    user *usr =  new user(this);
    validateUserObject(*usr);
    return *usr;
}

void userBuilder::validateUserObject(user u) {
    //Do some basic validations to check 
    //if user object does not break any assumption of system
}
