#include "Student.h"
#include "StudentView.h"
#include "StudentController.h"

static Student *retriveStudentFromDatabase(){
   Student *student = new Student();
   student->setName("Robert");
   student->setRollNo("10");
   return student;
}


int main(){   
   Student *model  = retriveStudentFromDatabase();
   StudentView *view = new StudentView();
   StudentController *controller = new StudentController(model, view);
   controller->updateView();   
   controller->setStudentName("John");

   controller->updateView();
   return 0;
}



