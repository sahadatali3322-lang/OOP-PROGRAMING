#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount {
private:
    double* balance; // Pointer to dynamically allocated balance
public:
    // Constructor
    BankAccount(double initialBalance);
    
    // Default copy constructor (shallow copy) - commented out for Task 2
    // BankAccount(const BankAccount& other);
    
    // Deep copy constructor (Task 2)
    BankAccount(const BankAccount& other);
    
    // Destructor
    ~BankAccount();
    
    // Member functions
    void setBalance(double newBalance);
    double getBalance() const;
    void display() const;
};

#endif