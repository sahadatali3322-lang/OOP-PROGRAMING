// Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    int length;
    int width;
public:
    Rectangle();                 // default constructor
    void setDimensions();        // input length and width
    int area() const;            // calculate area
    int perimeter() const;       // calculate perimeter
    void display() const;
};

#endif // RECTANGLE_H
