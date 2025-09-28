#include "Person.h"
#include <iostream>
using namespace std;

// Constructor
Person::Person(string n, int a) : name(n), age(a) {}

void Person::setPerson(string n, int a) {
    name = n;
    age = a;
}

void Person::showPerson() const {
    cout << "Name: " << name << ", Age: " << age << endl;
}