// Rectangle.cpp
#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : length(0), width(0) {}

void Rectangle::setDimensions() {
    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter width: ";
    std::cin >> width;
}

int Rectangle::area() const {
    return length * width;
}

int Rectangle::perimeter() const {
    return 2 * (length + width);
}

void Rectangle::display() const {
    std::cout << "Length: " << length << ", Width: " << width << "\n";
    std::cout << "Area: " << area() << "\n";
    std::cout << "Perimeter: " << perimeter() << "\n";
}
