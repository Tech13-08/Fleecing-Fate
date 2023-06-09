#ifndef GAME_H
#define GAME_H
#include <iostream> 
#include <cstring> 
#include "src/Location/LocationMove.h"
#include "src/Location/LocationManager.h"
#include "src/Character/CharacterSelector.h"
#include "src/Inventory/Inventory.h"
#include "src/Character/Player.h"
using namespace std;

class Game {
private:
    LocationMove* locMove;
    Inventory* inv;
    CharacterSelector* charselect;
    Player* p;
    LocationManager* lm;
    bool quit = false;

public:
    Game(string);
    void runGame();
    void displayMenu();
    void handleInput(int);
    void handleGameOver();
};

#endif