#include <iostream>
#include "Employee.h"
#include "BankAccount.h"
#include "Rectangle.h"
#include "Locker.h"

int main() {
    std::cout << "=== Task 1: Employee (Default Constructor) ===\n";
    Employee e_default; // uses default constructor
    e_default.displayDetails();

    std::cout << "=== Task 2: BankAccount (Parameterized Constructor) ===\n";
    // Example from slides:
    BankAccount account_from_slide("PK0309800780100", "Muhammad Awais", 10000.0);
    account_from_slide.showAccountDetails();

    // Also demonstrate user-provided example:
    BankAccount custom_account("ACC12345", "Ali Khan", 2500.75);
    custom_account.showAccountDetails();

    std::cout << "=== Task 3: Rectangle (Constructor Overloading) ===\n";
    Rectangle r_default;       // default constructor (1.0 x 1.0)
    Rectangle r_param(3.5f, 2.0f); // 3.5 x 2.0
    Rectangle r_square(4.0f);  // square: 4.0 x 4.0

    r_default.display();
    r_param.display();
    r_square.display();

    std::cout << "=== Task 4: Locker (Destructor Demo) ===\n";
    // Stack object in a block - destructor will be called when block ends
    {
        Locker stack_locker;
        std::cout << "Inside block with stack_locker.\n";
    } // stack_locker destructor runs here

    // Heap object: create with new and delete explicitly
    Locker *heap_locker = new Locker();
    std::cout << "Heap locker created; now deleting it.\n";
    delete heap_locker; // destructor runs here

    std::cout << "=== End of demonstrations ===\n";
    return 0;
}