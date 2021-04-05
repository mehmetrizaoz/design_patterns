#include "Employee.h"
#include <string>
#include <list>
#include <iostream>

using namespace std;

Employee::Employee(string name, string dept, int sal) {
    this->name = name;
    this->dept = dept;
    this->salary = sal;
    //subordinates = new ArrayList<Employee>();
}

void Employee::add(Employee e) {
    subordinates.push_back(e);
}

void Employee::remove(Employee e) {
    subordinates.pop_back();
}

list<Employee> Employee::getSubordinates(){
    return subordinates;
}

void Employee::toString(){
    cout << "Employee :[ Name : " << this->name << ", dept : " << this->dept << ", salary :" << this->salary << " ]" << endl;
} 