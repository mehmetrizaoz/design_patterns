#pragma once

#include <string>
#include "user.h"

using namespace std;

class user;

class userBuilder{
public:    
    string firstName;
    string lastName;
    int age;
    string phone;
    string address;
    userBuilder(string first, string last);
    userBuilder& setAge(int a);
    userBuilder& setPhone(string phone);
    userBuilder& setAddress(string address);    
    user build();
    void validateUserObject(user user);
};