#include "MathOperations.h"
#include <iostream>
#include <sstream>

// Friend function accessing private members of both Rectangle and Circle
void compareShapes(const Rectangle& rect, const Circle& circle) {
    std::cout << "\n=== Friend Function Comparing Shapes ===" << std::endl;
    std::cout << "Rectangle: " << rect.name << " (Width: " << rect.width 
              << ", Height: " << rect.height << ")" << std::endl;
    std::cout << "Circle: " << circle.name << " (Radius: " << circle.radius << ")" << std::endl;
    std::cout << "Rectangle Area: " << rect.area() << std::endl;
    std::cout << "Circle Area: " << circle.area() << std::endl;
    
    if (rect.area() > circle.area()) {
        std::cout << "Rectangle has larger area." << std::endl;
    } else {
        std::cout << "Circle has larger area." << std::endl;
    }
}

// Static function implementation
double MathOperations::calculateTotalArea(const Shape* shapes[], int count) {
    double total = 0.0;
    for (int i = 0; i < count; ++i) {
        total += shapes[i]->area();
    }
    return total;
}

// Another friend function
std::string getCombinedInfo(const Rectangle& rect, const Circle& circle) {
    std::ostringstream oss;
    oss << "Combined Info - Rectangle: " << rect.name << " (" << rect.width 
        << "x" << rect.height << "), Circle: " << circle.name 
        << " (Radius: " << circle.radius << ")";
    return oss.str();
}