#ifndef HIERARCHICALINHERITANCE_H
#define HIERARCHICALINHERITANCE_H

#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void startEngine() {
        cout << "Engine started." << endl;
    }
};

// Derived class 1
class Car : public Vehicle {
public:
    void openTrunk() {
        cout << "Trunk is open." << endl;
    }
};

// Derived class 2
class Bike : public Vehicle {
public:
    void kickStart() {
        cout << "Bike kick started." << endl;
    }
};

// Derived class 3
class Truck : public Vehicle {
public:
    void loadCargo() {
        cout << "Cargo loaded into the truck." << endl;
    }
};

void demonstrateHierarchicalInheritance() {
    cout << "=== HIERARCHICAL INHERITANCE DEMONSTRATION ===" << endl;
    Car myCar;
    Bike myBike;
    Truck myTruck;

    // All have access to base class method
    myCar.startEngine();
    myCar.openTrunk();

    myBike.startEngine();
    myBike.kickStart();

    myTruck.startEngine();
    myTruck.loadCargo();
    cout << endl;
}

#endif