#include "Transaction.h"
#include "Utils.h"
#include <iostream>

Transaction::Transaction(const std::string& type, double amount, const std::string& details) {
    this->id = generateTransactionID();
    this->type = type;
    this->amount = amount;
    this->timestamp = getCurrentDateTime();
    this->details = details;
}

void Transaction::print() const {
    std::cout << "[" << id << "] " << type << " $" << amount 
              << " on " << timestamp << " (" << details << ")\n";
}
