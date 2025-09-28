#include "Student.h"
#include <iostream>
using namespace std;

// Constructor
Student::Student(string n, int a, int r) : Person(n, a), rollNo(r) {}

void Student::setStudent(string n, int a, int r) {
    setPerson(n, a); // Call base class method (Task 3 requirement)
    rollNo = r;
}

void Student::showStudent() const {
    showPerson(); // Call base class method
    cout << "Roll No: " << rollNo << endl;
}