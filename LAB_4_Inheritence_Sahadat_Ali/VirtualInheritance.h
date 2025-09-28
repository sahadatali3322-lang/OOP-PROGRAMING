#ifndef VIRTUALINHERITANCE_H
#define VIRTUALINHERITANCE_H

#include <iostream>
using namespace std;

class Person {
public:
    void showIdentity() {
        cout << "I am a person." << endl;
    }
};

// Use virtual inheritance
class Teacher : virtual public Person {
public:
    void teach() {
        cout << "Teaching students." << endl;
    }
};

class Student : virtual public Person {
public:
    void study() {
        cout << "Studying courses." << endl;
    }
};

class TeachingAssistant : public Teacher, public Student {
public:
    void assist() {
        cout << "Assisting in labs and grading." << endl;
    }
};

void demonstrateVirtualInheritance() {
    cout << "=== VIRTUAL INHERITANCE SOLUTION ===" << endl;
    TeachingAssistant ta;
    ta.showIdentity(); // No ambiguity with virtual inheritance
    ta.teach();
    ta.study();
    ta.assist();
    cout << endl;
}

#endif