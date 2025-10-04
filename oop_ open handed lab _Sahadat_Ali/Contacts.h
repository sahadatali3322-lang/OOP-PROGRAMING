#ifndef CONTACTS_H
#define CONTACTS_H

#include <string>
#include <vector>

class Contacts {
private:
    std::vector<std::string> contactList;
public:
    void addContact(const std::string& username);
    void showContacts() const;
};

#endif
