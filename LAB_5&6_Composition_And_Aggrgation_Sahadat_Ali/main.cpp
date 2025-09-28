#include <iostream>
#include "Team.h"
#include "Car.h"
#include "TeachingAssistant.h"

using namespace std;

void demonstrateAggregation() {
    cout << "=== DEMONSTRATING AGGREGATION ===" << endl;
    Player* pl = new Player("Alice"); // Player created independently
    {
        Team t1(pl); // Team aggregates existing player
        t1.startWatch();
        // Team goes out of scope and is destroyed
        // But Player is still alive
    }
    
    pl->play(); // Still accessible after Team is gone
    delete pl; // Now we manually destroy Player
    cout << endl;
}

void demonstrateComposition() {
    cout << "=== DEMONSTRATING COMPOSITION ===" << endl;
    {
        Car myCar("EMG-9876"); // Car and Engine constructed together
        myCar.startCar();
        // When Car goes out of scope, Engine is destroyed too
    }
    cout << endl;
}

void demonstrateInheritance() {
    cout << "=== DEMONSTRATING VIRTUAL INHERITANCE ===" << endl;
    TeachingAssistant ta;
    ta.showIdentity(); // No ambiguity
    ta.teach();
    ta.study();
    ta.assist();
    cout << endl;
}

int main() {
    demonstrateAggregation();
    demonstrateComposition();
    demonstrateInheritance();
    
    return 0;
}