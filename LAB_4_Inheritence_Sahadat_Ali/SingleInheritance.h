#ifndef SINGLEINHERITANCE_H
#define SINGLEINHERITANCE_H

#include <iostream>
#include <string>
using namespace std;

// Base Class
class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) balance -= amount;
    }

    double getBalance() {
        return balance;
    }

    string getAccountHolder() {
        return accountHolder;
    }
};

// Derived Class (Single Inheritance)
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string name, double initialBalance, double rate)
        : BankAccount(name, initialBalance) {
        interestRate = rate;
    }

    void addInterest() {
        double interest = getBalance() * interestRate / 100;
        deposit(interest);
    }
};

void demonstrateSingleInheritance() {
    cout << "=== SINGLE INHERITANCE DEMONSTRATION ===" << endl;
    SavingsAccount acc("Ali", 10000, 5.0);
    acc.deposit(2000);
    acc.addInterest();
    acc.withdraw(1000);

    cout << "Account Holder: " << acc.getAccountHolder() << endl;
    cout << "Final Balance: " << acc.getBalance() << endl;
    cout << endl;
}

#endif