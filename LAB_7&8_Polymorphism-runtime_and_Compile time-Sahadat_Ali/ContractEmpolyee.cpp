#include "ContractEmployee.h"
#include <iostream>

ContractEmployee::ContractEmployee(double rate, double hours) 
    : hourlyRate(rate), hoursWorked(hours) {}

double ContractEmployee::calculateSalary() {
    std::cout << "Contract Employee: Hourly Rate = " << hourlyRate 
              << ", Hours Worked = " << hoursWorked << std::endl;
    return hourlyRate * hoursWorked;
}