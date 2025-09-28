// Calculator.cpp
#include "Calculator.h"

float Calculator::add(float a, float b) {
    return a + b;
}
float Calculator::subtract(float a, float b) {
    return a - b;
}
float Calculator::multiply(float a, float b) {
    return a * b;
}
bool Calculator::divide(float a, float b, float &result) {
    if (b == 0.0f) return false;
    result = a / b;
    return true;
}
