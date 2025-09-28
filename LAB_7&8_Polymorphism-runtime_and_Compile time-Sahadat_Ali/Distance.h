#ifndef DISTANCE_H
#define DISTANCE_H

#include <iostream>

class Distance {
private:
    int feet;
    int inches;
    
    void normalize() {
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
    }
    
public:
    // Constructor
    Distance(int f = 0, int i = 0);
    
    // Operator overloading
    bool operator==(const Distance& other) const;
    
    // Member functions
    void display() const;
};

#endif