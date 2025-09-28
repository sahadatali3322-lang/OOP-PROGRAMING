#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
private:
    double real;
    double imag;
    
public:
    // Constructors
    Complex();
    Complex(double real, double imag);
    
    // Operator overloading
    Complex operator+(const Complex& other) const;
    
    // Member functions
    void printComplexNumber() const;
};

#endif