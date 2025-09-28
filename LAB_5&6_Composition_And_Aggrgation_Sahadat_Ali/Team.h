#ifndef TEAM_H
#define TEAM_H

class Player; // Forward declaration

class Team {
private:
    Player* player; // Aggregation: Team has a Player, but doesn't own
public:
    Team(Player* p);
    void startWatch();
    // No destructor needed to delete player - not owned!
};

#endif