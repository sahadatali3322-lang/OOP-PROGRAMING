#include "Car.h"

Car::Car(std::string engineNum) {
    engine.setEngineNumber(engineNum); // Initialized inside constructor body
    std::cout << "Car created with engine " << engineNum << "." << std::endl;
}

void Car::startCar() {
    engine.start();
    std::cout << "Car is starting." << std::endl;
}

Car::~Car() {
    std::cout << "Car destroyed." << std::endl;
}