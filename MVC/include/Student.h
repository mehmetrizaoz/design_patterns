#pragma once

#include <string>

using namespace std;

class Student {
private:
   string rollNo;
   string name;
public:
   string getRollNo();
   void setRollNo(string rollNo);
   string getName();
   void setName(string name);
};

