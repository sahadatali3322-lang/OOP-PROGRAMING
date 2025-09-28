#include <iostream>
#include "Complex.h"
#include "Distance.h"
#include "Employee.h"
#include "PermanentEmployee.h"
#include "ContractEmployee.h"

using namespace std;

void demonstrateOperatorOverloading() {
    cout << "=== DEMONSTRATING OPERATOR OVERLOADING ===" << endl;
    
    // Complex number example
    cout << "\n1. Complex Number Addition:" << endl;
    Complex c1(2.3, 3.2), c2(4.0, 4.5);
    Complex c3 = c1 + c2;
    cout << "c1 = "; c1.printComplexNumber();
    cout << "c2 = "; c2.printComplexNumber();
    cout << "c1 + c2 = "; c3.printComplexNumber();
    
    // Distance comparison example
    cout << "\n2. Distance Comparison:" << endl;
    Distance d1(5, 8);  // 5 feet, 8 inches
    Distance d2(5, 8);  // 5 feet, 8 inches
    Distance d3(6, 2);  // 6 feet, 2 inches
    
    cout << "d1: "; d1.display();
    cout << "d2: "; d2.display();
    cout << "d3: "; d3.display();
    
    if (d1 == d2) {
        cout << "d1 is equal to d2" << endl;
    } else {
        cout << "d1 is not equal to d2" << endl;
    }
    
    if (d1 == d3) {
        cout << "d1 is equal to d3" << endl;
    } else {
        cout << "d1 is not equal to d3" << endl;
    }
}

void demonstratePolymorphism() {
    cout << "\n=== DEMONSTRATING POLYMORPHISM ===" << endl;
    
    // Create objects
    PermanentEmployee permEmp(40000, 5000);
    ContractEmployee contractEmp(800, 30);
    
    // Use base class pointers for polymorphism
    Employee* emp1 = &permEmp;
    Employee* emp2 = &contractEmp;
    
    cout << "\nPermanent Employee Salary Calculation:" << endl;
    double salary1 = emp1->calculateSalary();
    cout << "Calculated Salary: " << salary1 << endl;
    
    cout << "\nContract Employee Salary Calculation:" << endl;
    double salary2 = emp2->calculateSalary();
    cout << "Calculated Salary: " << salary2 << endl;
    
    // Demonstrate with array of base class pointers
    cout << "\nUsing Array of Employee Pointers:" << endl;
    Employee* employees[2];
    employees[0] = &permEmp;
    employees[1] = &contractEmp;
    
    for (int i = 0; i < 2; i++) {
        double salary = employees[i]->calculateSalary();
        cout << "Employee " << (i + 1) << " Salary: " << salary << endl;
    }
}

int main() {
    demonstrateOperatorOverloading();
    demonstratePolymorphism();
    
    return 0;
}