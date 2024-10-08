#include <iostream>
#include <stdlib.h>
#include <string>
#include "../Character/AllCharacters.h"
#include "../Inventory/Inventory.h"
#include "BattleMenu.h"
using namespace std;

#ifndef BATTLE_H
#define BATTLE_H
class Battle{
    private:
        Player* player;
        Enemy* enemy;
        Inventory* inventory;
        BattleMenu* battleMenu;
        int battleState = 0; //0 for in progress, 1 for win, 2 for loss CHANGE LATER
        int playerAP = 0;
    public:
        Battle(Player* player, Enemy* enemy, Inventory* inv);
        ~Battle();
        void playerAttack();
        void playerStrongAttack();
        void menu();
        void playerTurn();
        void enemyTurn();
        bool doBattle(); //returns false for loss, true for win
};
#endif