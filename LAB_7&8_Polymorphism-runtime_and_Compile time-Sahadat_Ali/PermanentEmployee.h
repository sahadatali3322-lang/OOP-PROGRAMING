#ifndef PERMANENTEMPLOYEE_H
#define PERMANENTEMPLOYEE_H

#include "Employee.h"

class PermanentEmployee : public Employee {
private:
    double basicSalary;
    double bonus;
    
public:
    PermanentEmployee(double basic = 0, double bonus = 0);
    double calculateSalary() override;
};

#endif