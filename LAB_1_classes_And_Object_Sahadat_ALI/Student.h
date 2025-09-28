// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int rollNumber;
    float marks;

    // Functions defined inside the class (Task 1 requirement)
    void getData() {
        std::cout << "Enter student name: ";
        std::getline(std::cin >> std::ws, name);
        std::cout << "Enter roll number: ";
        std::cin >> rollNumber;
        std::cout << "Enter marks: ";
        std::cin >> marks;
    }

    void displayData() {
        std::cout << "\nStudent Info:\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Roll Number: " << rollNumber << "\n";
        std::cout << "Marks: " << marks << "\n";
    }
};

#endif // STUDENT_H
