#include "Rectangle.h"
#include <iostream>
#include <cmath>

// Initialize static data member
int Rectangle::rectangleCount = 0;

Rectangle::Rectangle(const std::string& n, double w, double h) 
    : Shape(n), width(w), height(h) {
    rectangleCount++;
    std::cout << "Rectangle created: " << name << " (" << width << "x" << height << ")" << std::endl;
}

Rectangle::~Rectangle() {
    rectangleCount--;
    std::cout << "Rectangle destroyed: " << name << std::endl;
}

double Rectangle::area() const {
    return width * height;
}

double Rectangle::perimeter() const {
    return 2 * (width + height);
}

void Rectangle::display() const {
    std::cout << "Rectangle: " << name << " | Width: " << width 
              << " | Height: " << height << " | Area: " << area() 
              << " | Perimeter: " << perimeter() << std::endl;
}

int Rectangle::getRectangleCount() {
    return rectangleCount;
}

// Friend function definition
double calculateDiagonal(const Rectangle& rect) {
    return std::sqrt(rect.width * rect.width + rect.height * rect.height);
}