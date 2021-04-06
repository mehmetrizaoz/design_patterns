#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <list>

using namespace std;

class Employee {
private:
   string name;
   string dept;
   int salary;
   list<Employee> subordinates;

public:
   Employee(string name,string dept, int sal);
   void add(Employee e);
   void remove();
   list<Employee> getSubordinates();
   void toString();
};

#endif