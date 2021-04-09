#include "Student.h"
#include <string>

using namespace std;

string Student::getRollNo() {
    return rollNo;
}

void Student::setRollNo(string rollNo) {
    this->rollNo = rollNo;
}

string Student::getName() {
    return name;
}

void Student::setName(string name) {
    this->name = name;
}
