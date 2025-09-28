#ifndef STUDENTRECORD_H
#define STUDENTRECORD_H

#include <string>

struct Student {
    int rollNo;
    std::string name;
    double gpa;
    
    Student(int r = 0, const std::string& n = "", double g = 0.0) 
        : rollNo(r), name(n), gpa(g) {}
};

class StudentRecordManager {
private:
    std::string filename;
    
public:
    StudentRecordManager(const std::string& fname = "students.txt") : filename(fname) {}
    
    void addStudent(const Student& student);
    void displayAllStudents();
    void updateStudent(int rollNo, const Student& newStudent);
    void demonstrateSeekOperations();
};

#endif