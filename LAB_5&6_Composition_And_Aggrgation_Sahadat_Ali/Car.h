#ifndef CAR_H
#define CAR_H

#include "Engine.h"

class Car {
private:
    Engine engine; // Composition: Car owns Engine
public:
    Car(std::string engineNum);
    void startCar();
    ~Car();
};

#endif