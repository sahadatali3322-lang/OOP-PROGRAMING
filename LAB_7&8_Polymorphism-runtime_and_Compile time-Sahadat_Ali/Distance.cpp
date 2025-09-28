#include "Distance.h"

// Constructor
Distance::Distance(int f, int i) : feet(f), inches(i) {
    normalize();
}

// Overload == operator
bool Distance::operator==(const Distance& other) const {
    return (feet == other.feet) && (inches == other.inches);
}

// Display distance
void Distance::display() const {
    std::cout << feet << " feet, " << inches << " inches" << std::endl;
}