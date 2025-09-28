#include "Employee.h"

// Default constructor: id=0, name="Not Assigned", salary=0.0
Employee::Employee() : id(0), name("Not Assigned"), salary(0.0f) {}

Employee::Employee(int id_, const std::string &name_, float salary_)
    : id(id_), name(name_), salary(salary_) {}

void Employee::displayDetails() const {
    std::cout << "Employee Details:\n";
    std::cout << "  ID     : " << id << "\n";
    std::cout << "  Name   : " << name << "\n";
    std::cout << "  Salary : " << salary << "\n";
    std::cout << "-----------------------------\n";
}