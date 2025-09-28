#ifndef CONTRACTEMPLOYEE_H
#define CONTRACTEMPLOYEE_H

#include "Employee.h"

class ContractEmployee : public Employee {
private:
    double hourlyRate;
    double hoursWorked;
    
public:
    ContractEmployee(double rate = 0, double hours = 0);
    double calculateSalary() override;
};

#endif