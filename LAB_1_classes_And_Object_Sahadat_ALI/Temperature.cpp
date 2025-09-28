// Temperature.cpp
#include "Temperature.h"
#include <iostream>

Temperature::Temperature() : celsius(0.0) {}

void Temperature::setCelsius(double c) {
    celsius = c;
}

double Temperature::toFahrenheit() const {
    return (celsius * 9.0 / 5.0) + 32.0;
}

void Temperature::inputAndConvert() {
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;
    double f = toFahrenheit();
    std::cout << celsius << " °C = " << f << " °F\n";
}
