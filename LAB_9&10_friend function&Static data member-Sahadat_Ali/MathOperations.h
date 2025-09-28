#ifndef MATHOPERATIONS_H
#define MATHOPERATIONS_H

#include "Rectangle.h"
#include "Circle.h"

class MathOperations {
public:
    // Friend function that can access private members of both Rectangle and Circle
    friend void compareShapes(const Rectangle& rect, const Circle& circle);
    
    // Static function to calculate total area
    static double calculateTotalArea(const Shape* shapes[], int count);
    
    // Friend function to create a combined shape description
    friend std::string getCombinedInfo(const Rectangle& rect, const Circle& circle);
};

#endif