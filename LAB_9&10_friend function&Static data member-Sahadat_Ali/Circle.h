#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
    double radius;
    static int circleCount;  // Static data member for Circle
    static const double PI;  // Constant static member

public:
    Circle(const std::string& n, double r);
    ~Circle() override;
    
    // Override pure virtual functions
    double area() const override;
    double perimeter() const override;
    void display() const override;
    
    // Static member functions
    static int getCircleCount();
    static double getPI();
    
    // Friend function specific to Circle
    friend double calculateCircumference(const Circle& circle);
    
    // Getter
    double getRadius() const { return radius; }
};

#endif