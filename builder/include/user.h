#pragma once

#include <string>
#include "userBuilder.h"

using namespace std;

class userBuilder;

class user {
public:    
    string firstName;
    string lastName;
    int age;
    string phone;
    string address;    
    user (userBuilder builder);
    string getFirstName();
    string getLastName();
    int getAge();
    string getPhone();
    string getAddress();
    void print();  
};