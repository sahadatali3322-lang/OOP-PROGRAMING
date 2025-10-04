#include "Menu.h"
#include "Database.h"
#include "Wallet.h"
#include "Report.h"
#include <iostream>

void Menu::mainMenu() {
    int choice;
    do {
        std::cout << "\n--- SmartPay Digital Wallet ---\n";
        std::cout << "1. Register\n2. Login\n3. Exit\nChoice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string u, p, ph;
            std::cout << "Enter username: "; std::cin >> u;
            std::cout << "Enter password: "; std::cin >> p;
            std::cout << "Enter phone: "; std::cin >> ph;
            Database::registerUser(u, p, ph);
        } else if (choice == 2) {
            std::string u, p;
            std::cout << "Enter username: "; std::cin >> u;
            std::cout << "Enter password: "; std::cin >> p;
            User* user = Database::loginUser(u, p);
            if (user) userMenu(user);
            else std::cout << "Login failed!\n";
        }
    } while (choice != 3);
}

void Menu::userMenu(User* user) {
    Wallet wallet(user);
    int choice;
    do {
        std::cout << "\n--- User Menu (" << user->username << ") ---\n";
        std::cout << "1. Balance\n2. Deposit\n3. Send Money\n4. History\n5. Export CSV\n6. Logout\nChoice: ";
        std::cin >> choice;

        if (choice == 1) {
            wallet.showBalance();
        } else if (choice == 2) {
            double amt;
            std::cout << "Amount: "; std::cin >> amt;
            wallet.deposit(amt);
        } else if (choice == 3) {
            std::string recv;
            double amt;
            std::cout << "Receiver username: "; std::cin >> recv;
            User* r = Database::findUser(recv);
            if (r) {
                std::cout << "Amount: "; std::cin >> amt;
                wallet.sendMoney(r, amt);
            } else {
                std::cout << "User not found!\n";
            }
        } else if (choice == 4) {
            for (auto& tx : user->history) tx.print();
        } else if (choice == 5) {
            Report::exportTransactions(*user);
        }
    } while (choice != 6);
}
