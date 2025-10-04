#ifndef DATABASE_H
#define DATABASE_H

#include "User.h"
#include <map>
#include <mutex>

class Database {
private:
    static std::map<std::string, User*> users;
    static std::mutex dbMutex;
public:
    static bool registerUser(const std::string& username, const std::string& password, const std::string& phone);
    static User* loginUser(const std::string& username, const std::string& password);
    static User* findUser(const std::string& username);
    static void saveToFile();
    static void loadFromFile();
};

#endif
