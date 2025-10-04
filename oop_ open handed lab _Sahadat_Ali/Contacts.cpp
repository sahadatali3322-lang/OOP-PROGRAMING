#include "Contacts.h"
#include <iostream>

void Contacts::addContact(const std::string& username) {
    contactList.push_back(username);
}

void Contacts::showContacts() const {
    std::cout << "\n--- Contacts ---\n";
    for (auto& c : contactList) {
        std::cout << "- " << c << std::endl;
    }
}
