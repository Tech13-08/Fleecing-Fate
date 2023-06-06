#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

#ifndef BATTLE_H
#define BATTLE_H
class Battle{
    private:
        int playerHP = 100;
        int playerATK = 25;
        int enemyHP = 100;
        int enemyATK = 15;
        int winloss = 0; //0 for in progress, 1 for win, 2 for loss CHANGE LATER
        int playerAP = 0;
    public:
        Battle();
        void displayStatus();
        int calcDamage(int baseDamage);
        int calcDamageWithCrit(int baseDamage, int critChance);
        void playerAttack();
        void playerStrongAttack();
        void doNothing();
        void menu();
        void playerTurn();
        void playerTakeDamage(int damage); //stub
        void enemyTurn();
        void enemyTakeDamage(int damage); //stub
        bool doBattle(); //returns false for loss, true for win
};
#endif