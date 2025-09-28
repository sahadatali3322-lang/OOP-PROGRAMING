#include "Team.h"
#include "Player.h"

Team::Team(Player* p) {
    player = p;
    std::cout << "Team created with a player." << std::endl;
}

void Team::startWatch() {
    std::cout << "Watch started." << std::endl;
    player->play();
}