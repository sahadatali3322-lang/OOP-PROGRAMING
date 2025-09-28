#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

class Employee {
private:
    int id;
    std::string name;
    float salary;

public:
    // Default constructor (Task 1)
    Employee();

    // Optional: parameterized constructor (not required by Task 1)
    Employee(int id, const std::string &name, float salary);

    void displayDetails() const;
};

#endif // EMPLOYEE_H