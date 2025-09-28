#include "BankAccount.h"
#include <iostream>
using namespace std;

// Constructor
BankAccount::BankAccount(double initialBalance) {
    balance = new double(initialBalance);
    cout << "BankAccount constructor called. Balance: " << *balance << endl;
}

// Deep Copy Constructor (Task 2)
BankAccount::BankAccount(const BankAccount& other) {
    balance = new double(*other.balance); // Create new memory
    cout << "Deep copy constructor called. Balance: " << *balance << endl;
}

// Destructor
BankAccount::~BankAccount() {
    cout << "Destructor called. Freeing memory for balance: " << *balance << endl;
    delete balance;
}

void BankAccount::setBalance(double newBalance) {
    *balance = newBalance;
}

double BankAccount::getBalance() const {
    return *balance;
}

void BankAccount::display() const {
    cout << "Account Balance: " << *balance << endl;
}