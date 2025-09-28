#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include <iostream>

class Engine {
private:
    std::string engineNumber;
public:
    Engine();
    void setEngineNumber(std::string number);
    void start();
    ~Engine();
};

#endif