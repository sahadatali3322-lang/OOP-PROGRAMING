#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor -> length=1.0, width=1.0 (Task 3)
    Rectangle();

    // Parameterized constructor (two floats)
    Rectangle(float length_, float width_);

    // Single-parameter constructor -> square
    Rectangle(float side);

    float area() const;
    void display() const;
};

#endif // RECTANGLE_H