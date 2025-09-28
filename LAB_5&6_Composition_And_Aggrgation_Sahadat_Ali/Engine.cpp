#include "Engine.h"

Engine::Engine() {
    engineNumber = "UNKNOWN";
    std::cout << "Default Engine created." << std::endl;
}

void Engine::setEngineNumber(std::string number) {
    engineNumber = number;
}

void Engine::start() {
    std::cout << "Engine " << engineNumber << " starts." << std::endl;
}

Engine::~Engine() {
    std::cout << "Engine " << engineNumber << " destroyed." << std::endl;
}