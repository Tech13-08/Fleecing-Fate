#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
    string playerName = "Peg";
    double playerHP = 100.0;
    double playerATK = 10.0;
    Player* testPlayer = new Player(playerName, playerHP, playerATK);
    Enemy* testEnemy = new Enemy("Jerry", 100, 10);
    cout << "Enemy " << testEnemy->getName() << " encoutnered!!! its health is " << testEnemy->getMaxHealth() << "!!!" << endl;
    while (testEnemy->getAlive()) {
        testPlayer->specialAttack(testEnemy);
        cout << testEnemy->getName() << " has been attacked, it has " << testEnemy->getCurrHealth() << " hp left!" << endl;
        testEnemy->attack(testPlayer);
        cout << testEnemy->getName() << " attacks " << testPlayer->getName() << " (you)! you now have " << testPlayer->getCurrHealth() << " hp left! :o" << endl;
    }
    cout << testEnemy->getName() << " is dead!" << endl;

    return 0;
}