#include "./include/AllCharacters.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
    string playerName = "Peg";
    double playerHP = 100.0;
    double playerATK = 10.0;
    // Berserker* testPlayer = new Berserker(playerName, playerHP, playerATK);
    Rogue* testPlayer = new Rogue(playerName, playerHP, playerATK);
    Enemy* testEnemy = new Enemy("Jerry", 200.0, 5.0);
    cout << "Enemy " << testEnemy->getName() << " encoutnered!!! its health is " << testEnemy->getMaxHealth() << "!!!" << endl;
    while (testEnemy->getAlive()) {
        testPlayer->specialAttack(testEnemy);
        cout << testEnemy->getName() << " has been attacked, it has " << testEnemy->getCurrHealth() << " hp left!" << endl;
        cout << "You have " << testPlayer->getStat() << " rage." << endl;
        testEnemy->attack(testPlayer);
        cout << testEnemy->getName() << " attacks " << testPlayer->getName() << " (you)! you now have " << testPlayer->getCurrHealth() << " hp left! :o" << endl;
        cout << "You have " << testPlayer->getStat() << " rage." << endl;
        cout << endl;
    }
    cout << testEnemy->getName() << " is dead!" << endl;

    return 0;
}