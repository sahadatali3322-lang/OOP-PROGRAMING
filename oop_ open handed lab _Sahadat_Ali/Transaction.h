#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction {
public:
    std::string id;
    std::string type;
    double amount;
    std::string timestamp;
    std::string details;

    Transaction(const std::string& type, double amount, const std::string& details);
    void print() const;
};

#endif
