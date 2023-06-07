#include <iostream>
#include <stdlib.h>
#include <string>
#include "../Characters/Player.h"
#include "../Characters/Enemy.h"
using namespace std;

#ifndef BATTLE_H
#define BATTLE_H
class Battle{
    private:
        Player* player;
        Enemy* enemy;
        int winloss = 0; //0 for in progress, 1 for win, 2 for loss CHANGE LATER
        int playerAP = 0;
    public:
        Battle(Player* player, Enemy* enemy);
        void displayStatus();
        int calcDamage(int baseDamage);
        int calcDamageWithCrit(int baseDamage, int critChance);
        void playerAttack();
        void playerStrongAttack();
        void doNothing();
        void menu();
        void playerTurn();
        void enemyTurn();
        void enemyTakeDamage(int damage); //stub
        bool doBattle(); //returns false for loss, true for win
};
#endif