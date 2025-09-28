#include "Player.h"

Player::Player(std::string n) {
    name = n;
    std::cout << "Player " << name << " created." << std::endl;
}

void Player::play() {
    std::cout << name << " is playing." << std::endl;
}

Player::~Player() {
    std::cout << name << " is leaving the field." << std::endl;
}