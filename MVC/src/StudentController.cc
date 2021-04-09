#include <string>
#include "Student.h"
#include "StudentView.h"
#include "StudentController.h"

using namespace std;

StudentController::StudentController(Student *model, StudentView *view){
    this->model = model;
    this->view = view;
}

void StudentController::setStudentName(string name){
    model->setName(name);		
}

string StudentController::getStudentName(){
    return model->getName();		
}

void StudentController::setStudentRollNo(string rollNo){
    model->setRollNo(rollNo);		
}

string StudentController::getStudentRollNo(){
    return model->getRollNo();		
}

void StudentController::updateView(){				
    view->printStudentDetails(model->getName(), model->getRollNo());
}	
