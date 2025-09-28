#ifndef MULTILEVELINHERITANCE_H
#define MULTILEVELINHERITANCE_H

#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void startEngine() {
        cout << "Engine started." << endl;
    }
    void stopEngine() {
        cout << "Engine stopped." << endl;
    }
};

// Derived class from Vehicle
class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is being driven." << endl;
    }
    void honk() {
        cout << "Car horn is honking." << endl;
    }
};

// Derived class from Car (multilevel)
class ElectricCar : public Car {
public:
    void chargeBattery() {
        cout << "Battery is charging." << endl;
    }
    void showBatteryStatus() {
        cout << "Battery is at 85%." << endl;
    }
};

void demonstrateMultilevelInheritance() {
    cout << "=== MULTILEVEL INHERITANCE DEMONSTRATION ===" << endl;
    ElectricCar myTesla;

    // Accessing methods from all three levels
    myTesla.startEngine();        // from Vehicle
    myTesla.drive();              // from Car
    myTesla.chargeBattery();      // from ElectricCar
    myTesla.showBatteryStatus();  // from ElectricCar
    myTesla.honk();               // from Car
    myTesla.stopEngine();         // from Vehicle
    cout << endl;
}

#endif