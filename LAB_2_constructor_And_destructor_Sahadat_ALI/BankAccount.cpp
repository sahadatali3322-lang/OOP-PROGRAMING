#include "BankAccount.h"

BankAccount::BankAccount(const std::string &accountNumber_,
                         const std::string &accountHolder_,
                         double balance_)
    : accountNumber(accountNumber_), accountHolder(accountHolder_), balance(balance_) {}

void BankAccount::showAccountDetails() const {
    std::cout << "Bank Account Details:\n";
    std::cout << "  Account Number : " << accountNumber << "\n";
    std::cout << "  Account Holder : " << accountHolder << "\n";
    std::cout << "  Balance        : " << balance << "\n";
    std::cout << "-----------------------------\n";
}