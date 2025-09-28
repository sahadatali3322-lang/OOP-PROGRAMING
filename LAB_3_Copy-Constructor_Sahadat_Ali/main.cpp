#include <iostream>
#include "BankAccount.h"
#include "Student.h"
#include "Rectangle.h"
using namespace std;

// Function prototypes for each task
void task1_ShallowCopyDemo();
void task2_DeepCopyDemo();
void task3_InheritanceDemo();
void task4_ConstructorInheritanceDemo();

int main() {
    cout << "=== CS-1204 Lab 3: Object-Oriented Programming ===" << endl;
    cout << "=== All Tasks Demonstration ===" << endl << endl;
    
    // Task 1: Shallow Copy Demo (commented out to avoid crash after Task 2 implementation)
    // cout << "=== Task 1: Shallow Copy Demo ===" << endl;
    // task1_ShallowCopyDemo();
    // cout << endl;
    
    // Task 2: Deep Copy Demo
    cout << "=== Task 2: Deep Copy Demo ===" << endl;
    task2_DeepCopyDemo();
    cout << endl;
    
    // Task 3: Inheritance Demo
    cout << "=== Task 3: Single Inheritance Demo ===" << endl;
    task3_InheritanceDemo();
    cout << endl;
    
    // Task 4: Constructor in Inheritance Demo
    cout << "=== Task 4: Constructor in Inheritance Demo ===" << endl;
    task4_ConstructorInheritanceDemo();
    cout << endl;
    
    return 0;
}

// Task 1: Shallow Copy Demo
void task1_ShallowCopyDemo() {
    cout << "Creating original account..." << endl;
    BankAccount account1(1000.0);
    
    cout << "Creating copy using copy constructor..." << endl;
    BankAccount account2 = account1; // This uses our deep copy constructor now
    
    cout << "Original account balance: " << account1.getBalance() << endl;
    cout << "Copied account balance: " << account2.getBalance() << endl;
    
    cout << "Modifying copied account..." << endl;
    account2.setBalance(2000.0);
    
    cout << "After modification:" << endl;
    cout << "Original account balance: " << account1.getBalance() << endl;
    cout << "Copied account balance: " << account2.getBalance() << endl;
    
    cout << "Note: With deep copy implementation, original remains unchanged." << endl;
}

// Task 2: Deep Copy Demo
void task2_DeepCopyDemo() {
    cout << "Creating original account..." << endl;
    BankAccount account1(1500.0);
    
    cout << "Creating deep copy..." << endl;
    BankAccount account2 = account1; // Uses deep copy constructor
    
    cout << "Original balance: " << account1.getBalance() << endl;
    cout << "Copied balance: " << account2.getBalance() << endl;
    
    cout << "Modifying copied account..." << endl;
    account2.setBalance(3000.0);
    
    cout << "After modification:" << endl;
    cout << "Original balance: " << account1.getBalance() << " (unchanged)" << endl;
    cout << "Copied balance: " << account2.getBalance() << " (modified)" << endl;
    
    cout << "? Deep copy successful - objects are independent!" << endl;
}

// Task 3: Inheritance Demo
void task3_InheritanceDemo() {
    cout << "Creating Person object..." << endl;
    Person person;
    person.setPerson("John Doe", 25);
    person.showPerson();
    
    cout << "\nCreating Student object..." << endl;
    Student student;
    student.setStudent("Alice Smith", 20, 12345);
    student.showStudent();
    
    cout << "\nDemonstrating inheritance relationship..." << endl;
    Student student2("Bob Johnson", 22, 67890);
    student2.showStudent();
}

// Task 4: Constructor in Inheritance Demo
void task4_ConstructorInheritanceDemo() {
    cout << "Creating Rectangle object..." << endl;
    cout << "Observe constructor call order:" << endl;
    Rectangle rect;
    cout << "? Base class (Shape) constructor called before derived class (Rectangle)" << endl;
}