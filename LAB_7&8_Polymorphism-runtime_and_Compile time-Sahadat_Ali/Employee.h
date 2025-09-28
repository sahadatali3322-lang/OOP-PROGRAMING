#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
public:
    // Virtual destructor for proper cleanup
    virtual ~Employee() = default;
    
    // Virtual function for polymorphism
    virtual double calculateSalary();
};

#endif