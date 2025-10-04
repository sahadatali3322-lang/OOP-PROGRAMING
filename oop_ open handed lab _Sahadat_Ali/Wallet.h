#ifndef WALLET_H
#define WALLET_H

#include "User.h"

class Wallet {
private:
    User* owner;
public:
    Wallet(User* user);
    void deposit(double amount);
    bool sendMoney(User* receiver, double amount);
    void showBalance() const;
};

#endif
