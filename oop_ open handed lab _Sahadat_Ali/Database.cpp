#include "Database.h"
#include "OTP.h"
#include <iostream>
#include <fstream>

std::map<std::string, User*> Database::users;
std::mutex Database::dbMutex;

bool Database::registerUser(const std::string& username, const std::string& password, const std::string& phone) {
    std::lock_guard<std::mutex> lock(dbMutex);
    if (users.find(username) != users.end()) return false;

    std::string otp = OTP::generateOTP();
    std::cout << "Verify with OTP [" << otp << "]: ";
    std::string input;
    std::cin >> input;

    if (!OTP::verifyOTP(input, otp)) {
        std::cout << "OTP verification failed!\n";
        return false;
    }

    users[username] = new User(username, password, phone);
    std::cout << "Registration successful!\n";
    return true;
}

User* Database::loginUser(const std::string& username, const std::string& password) {
    std::lock_guard<std::mutex> lock(dbMutex);
    if (users.find(username) != users.end() && users[username]->password == password)
        return users[username];
    return nullptr;
}

User* Database::findUser(const std::string& username) {
    std::lock_guard<std::mutex> lock(dbMutex);
    if (users.find(username) != users.end()) return users[username];
    return nullptr;
}

void Database::saveToFile() {
    std::ofstream file("users.db");
    for (auto& pair : users) {
        file << pair.second->username << " " 
             << pair.second->password << " " 
             << pair.second->phone << " " 
             << pair.second->balance << "\n";
    }
    file.close();
}

void Database::loadFromFile() {
    std::ifstream file("users.db");
    std::string username, password, phone;
    double balance;
    while (file >> username >> password >> phone >> balance) {
        User* user = new User(username, password, phone);
        user->balance = balance;
        users[username] = user;
    }
    file.close();
}
