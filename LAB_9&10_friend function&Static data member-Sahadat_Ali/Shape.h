#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>

class Shape {
protected:
    std::string name;
    static int shapeCount;  // Static data member

public:
    Shape(const std::string& n);
    virtual ~Shape() = default;
    
    // Pure virtual functions - makes this an abstract class
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void display() const = 0;
    
    // Static member function
    static int getShapeCount();
    
    // Friend function declaration
    friend void printShapeDetails(const Shape& shape);
    
    // Regular member function
    std::string getName() const { return name; }
    
    // Static function to compare areas
    static bool compareArea(const Shape& s1, const Shape& s2);
};

#endif