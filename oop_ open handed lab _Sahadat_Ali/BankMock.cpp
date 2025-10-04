#include "BankMock.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

bool BankMock::settleTransaction(const std::string& txid, double amount) {
    srand(time(0));
    bool success = rand() % 2; // randomly succeed or fail
    if (success) {
        std::cout << "[Bank] Settlement of " << txid << " succeeded.\n";
        return true;
    } else {
        std::cout << "[Bank] Settlement of " << txid << " FAILED.\n";
        return false;
    }
}
