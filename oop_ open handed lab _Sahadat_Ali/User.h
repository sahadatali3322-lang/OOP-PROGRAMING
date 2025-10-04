#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Transaction.h"
#include "Contacts.h"

class User {
public:
    std::string username;
    std::string password;
    std::string phone;
    double balance;
    std::vector<Transaction> history;
    Contacts contacts;

    User(std::string username, std::string password, std::string phone);
    void addTransaction(const Transaction& tx);
};

#endif
