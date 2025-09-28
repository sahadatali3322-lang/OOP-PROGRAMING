#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    // Constructor
    Person(string n = "", int a = 0);
    
    // Member functions
    void setPerson(string n, int a);
    void showPerson() const;
};

#endif