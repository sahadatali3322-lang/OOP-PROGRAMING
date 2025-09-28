#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    int rollNo;
public:
    // Constructor
    Student(string n = "", int a = 0, int r = 0);
    
    // Member functions
    void setStudent(string n, int a, int r);
    void showStudent() const;
};

#endif