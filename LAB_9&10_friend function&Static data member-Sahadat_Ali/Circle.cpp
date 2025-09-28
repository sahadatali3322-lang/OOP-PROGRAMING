#include "Circle.h"
#include <iostream>
#include <cmath>

// Initialize static data members
int Circle::circleCount = 0;
const double Circle::PI = 3.14159265358979323846;

Circle::Circle(const std::string& n, double r) 
    : Shape(n), radius(r) {
    circleCount++;
    std::cout << "Circle created: " << name << " (Radius: " << radius << ")" << std::endl;
}

Circle::~Circle() {
    circleCount--;
    std::cout << "Circle destroyed: " << name << std::endl;
}

double Circle::area() const {
    return PI * radius * radius;
}

double Circle::perimeter() const {
    return 2 * PI * radius;
}

void Circle::display() const {
    std::cout << "Circle: " << name << " | Radius: " << radius 
              << " | Area: " << area() << " | Circumference: " << perimeter() << std::endl;
}

int Circle::getCircleCount() {
    return circleCount;
}

double Circle::getPI() {
    return PI;
}

// Friend function definition
double calculateCircumference(const Circle& circle) {
    return 2 * Circle::PI * circle.radius;
}