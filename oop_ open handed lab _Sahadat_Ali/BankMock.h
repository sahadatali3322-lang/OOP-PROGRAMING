#ifndef BANKMOCK_H
#define BANKMOCK_H

#include <string>

class BankMock {
public:
    static bool settleTransaction(const std::string& txid, double amount);
};

#endif
