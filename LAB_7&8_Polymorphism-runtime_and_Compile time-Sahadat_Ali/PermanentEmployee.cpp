#include "PermanentEmployee.h"
#include <iostream>

PermanentEmployee::PermanentEmployee(double basic, double b) 
    : basicSalary(basic), bonus(b) {}

double PermanentEmployee::calculateSalary() {
    std::cout << "Permanent Employee: Basic Salary = " << basicSalary 
              << ", Bonus = " << bonus << std::endl;
    return basicSalary + bonus;
}