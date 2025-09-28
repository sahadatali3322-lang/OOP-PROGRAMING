#include "Rectangle.h"
#include <iomanip>

Rectangle::Rectangle() : length(1.0f), width(1.0f) {}

Rectangle::Rectangle(float length_, float width_) : length(length_), width(width_) {}

Rectangle::Rectangle(float side) : length(side), width(side) {}

float Rectangle::area() const {
    // area = length * width
    return length * width;
}

void Rectangle::display() const {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Rectangle: length = " << length << ", width = " << width
              << ", area = " << area() << "\n";
}