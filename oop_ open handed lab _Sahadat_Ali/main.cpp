#include "Menu.h"
#include "Database.h"

int main() {
    Database::loadFromFile();
    Menu::mainMenu();
    Database::saveToFile();
    return 0;
}
