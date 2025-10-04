#include "Wallet.h"
#include "OTP.h"
#include <iostream>

Wallet::Wallet(User* user) {
    owner = user;
}

void Wallet::deposit(double amount) {
    owner->balance += amount;
    owner->addTransaction(Transaction("Deposit", amount, "Cash in"));
    std::cout << "Deposit successful. Balance: " << owner->balance << std::endl;
}

bool Wallet::sendMoney(User* receiver, double amount) {
    if (owner->balance >= amount) {
        std::string otp = OTP::generateOTP();
        std::cout << "Enter OTP [" << otp << "]: ";
        std::string input;
        std::cin >> input;
        if (OTP::verifyOTP(input, otp)) {
            owner->balance -= amount;
            receiver->balance += amount;
            owner->addTransaction(Transaction("Send", amount, "To " + receiver->username));
            receiver->addTransaction(Transaction("Receive", amount, "From " + owner->username));
            std::cout << "Sent successfully! New Balance: " << owner->balance << std::endl;
            return true;
        }
    }
    std::cout << "Transaction failed!\n";
    return false;
}

void Wallet::showBalance() const {
    std::cout << "Balance: " << owner->balance << std::endl;
}
