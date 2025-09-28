#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

class Player {
private:
    std::string name;
public:
    Player(std::string n);
    void play();
    ~Player();
};

#endif