#include "User.h"

User::User(std::string username, std::string password, std::string phone) {
    this->username = username;
    this->password = password;
    this->phone = phone;
    this->balance = 0.0;
}

void User::addTransaction(const Transaction& tx) {
    history.push_back(tx);
}
