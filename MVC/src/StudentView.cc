#include "StudentView.h"
#include <iostream>
#include <string>

using namespace std;

void StudentView::printStudentDetails(string studentName, string studentRollNo){
    cout << "Student: " << endl;
    cout << "Name: " + studentName << endl;
    cout << "Roll No: " + studentRollNo << endl;
}