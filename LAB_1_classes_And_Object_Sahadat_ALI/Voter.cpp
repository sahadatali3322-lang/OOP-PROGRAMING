// Voter.cpp
#include "Voter.h"
#include <iostream>

Voter::Voter() : name(""), age(0) {}

void Voter::getData() {
    std::cout << "Enter name: ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Enter age: ";
    std::cin >> age;
}

bool Voter::isEligible() const {
    return age > 18;
}

void Voter::displayResult() const {
    std::cout << "\nVoter: " << name << "\nAge: " << age << "\n";
    if (isEligible()) {
        std::cout << "Status: Eligible to vote.\n";
    } else {
        std::cout << "Status: Not eligible to vote.\n";
    }
}
