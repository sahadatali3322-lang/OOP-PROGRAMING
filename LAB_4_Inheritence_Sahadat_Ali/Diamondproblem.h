#ifndef DIAMONDPROBLEM_H
#define DIAMONDPROBLEM_H

#include <iostream>
using namespace std;

class Person {
public:
    void showIdentity() {
        cout << "I am a person." << endl;
    }
};

class Teacher : public Person {
public:
    void teach() {
        cout << "Teaching students." << endl;
    }
};

class Student : public Person {
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

void demonstrateDiamondProblem() {
    cout << "=== DIAMOND PROBLEM DEMONSTRATION ===" << endl;
    TeachingAssistant ta;
    
    // This line would cause ambiguity error - commented out for compilation
    // ta.showIdentity(); // ERROR: Ambiguous
    
    ta.teach();
    ta.study();
    ta.assist();
    
    cout << "Note: showIdentity() is commented out due to ambiguity error" << endl;
    cout << endl;
}

#endif