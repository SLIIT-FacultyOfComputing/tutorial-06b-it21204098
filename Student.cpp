#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int sId,const char sName[]) {
  studentId = sId;
  strcpy(name,sName);
  
}

// Display StudentId and Name
void Student::display() {

  cout<<"Name of the student : "<<name<<endl;
  cout<<"Student ID : "<<studentId<<endl;
  
}
