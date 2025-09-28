// Calculator.h
#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    static float add(float a, float b);
    static float subtract(float a, float b);
    static float multiply(float a, float b);
    static bool divide(float a, float b, float &result); // returns false on divide by zero
};

#endif // CALCULATOR_H
