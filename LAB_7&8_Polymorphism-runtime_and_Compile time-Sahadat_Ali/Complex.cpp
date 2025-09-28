#include "Complex.h"

// Default constructor
Complex::Complex() : real(0.0), imag(0.0) {}

// Parameterized constructor
Complex::Complex(double real, double imag) : real(real), imag(imag) {}

// Overload + operator
Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

// Print complex number
void Complex::printComplexNumber() const {
    std::cout << real << " + " << imag << "i" << std::endl;
}