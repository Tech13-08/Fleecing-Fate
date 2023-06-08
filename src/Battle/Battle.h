#include <iostream>
#include <stdlib.h>
#include <string>
#include "../Character/AllCharacters.h"
#include "BattleMenu.h"
using namespace std;

#ifndef BATTLE_H
#define BATTLE_H
class Battle{
    private:
        Player* player;
        Enemy* enemy;
        BattleMenu* battleMenu;
        int winloss = 0; //0 for in progress, 1 for win, 2 for loss CHANGE LATER
        int playerAP = 0;
    public:
        Battle(Player* player, Enemy* enemy);
        // int getAP();
        //void displayStatus();
        int calcDamage(int baseDamage);
        int calcDamageWithCrit(int baseDamage, int critChance);
        void playerAttack();
        void playerStrongAttack();
        //void doNothing();
        void menu(Inventory* inv);
        void playerTurn();
        void enemyTurn();
        //void enemyTakeDamage(int damage); //stub
        bool doBattle(); //returns false for loss, true for win
};
#endif