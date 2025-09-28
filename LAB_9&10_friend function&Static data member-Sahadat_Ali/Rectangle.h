#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    double width;
    double height;
    static int rectangleCount;  // Static data member for Rectangle

public:
    Rectangle(const std::string& n, double w, double h);
    ~Rectangle() override;
    
    // Override pure virtual functions
    double area() const override;
    double perimeter() const override;
    void display() const override;
    
    // Static member function
    static int getRectangleCount();
    
    // Friend function specific to Rectangle
    friend double calculateDiagonal(const Rectangle& rect);
    
    // Getters
    double getWidth() const { return width; }
    double getHeight() const { return height; }
};

#endif