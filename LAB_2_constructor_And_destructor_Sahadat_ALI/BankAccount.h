#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <iostream>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolder;
    double balance;

public:
    //_______________________________ (Task 2)_______________________________________________________
    BankAccount(const std::string &accountNumber_,
                const std::string &accountHolder_,
                double balance_);

    void showAccountDetails() const;
};

#endif 