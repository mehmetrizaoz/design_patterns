#pragma once

#include <string>
#include "Student.h"
#include "StudentView.h"

class StudentController {
private:
   Student *model;
   StudentView *view;
public:
   StudentController(Student *model, StudentView *view);
   void setStudentName(string name);
   string getStudentName();
   void setStudentRollNo(string rollNo);
   string getStudentRollNo();
   void updateView();
};

