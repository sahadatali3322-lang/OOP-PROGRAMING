#include "Shape.h"

// Initialize static data member
int Shape::shapeCount = 0;

Shape::Shape(const std::string& n) : name(n) {
    shapeCount++;
    std::cout << "Shape created: " << name << std::endl;
}

// Static member function definition
int Shape::getShapeCount() {
    return shapeCount;
}

// Friend function definition - can access protected members
void printShapeDetails(const Shape& shape) {
    std::cout << "Friend Function Access - Shape: " << shape.name << std::endl;
}

// Static function to compare areas
bool Shape::compareArea(const Shape& s1, const Shape& s2) {
    return s1.area() > s2.area();
}