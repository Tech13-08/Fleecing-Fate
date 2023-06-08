#include <iostream>
#include <string>
#include "../Character/AllCharacters.h"
using namespace std;

#ifndef BATTLEMENU_H
#define BATTLEMENU_H
class BattleMenu{
    private:
    public:
        BattleMenu();
        void showStatus(Player* player, Enemy* enemy, int ap);
        void doNothing();
        void showOutgoingAttack(int dmg);
        void showIncomingAttack(int dmg);
        void showAPSpent(int ap);
        void showMenu();
};
#endif