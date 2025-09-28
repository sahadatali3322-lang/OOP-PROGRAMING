// Voter.h
#ifndef VOTER_H
#define VOTER_H

#include <string>

class Voter {
private:
    std::string name;
    int age;
public:
    Voter();
    void getData();
    bool isEligible() const; // age > 18
    void displayResult() const;
};

#endif // VOTER_H
