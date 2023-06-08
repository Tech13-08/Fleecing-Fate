#include "gtest/gtest.h"
#include "../src/Character/AllCharacters.h"
#include <string>
// #include <iostream>
using namespace std;

TEST(BerserkerTests, rageTest) {
    Berserker* burger = new Berserker("Burger", 100.0, 200.0);
    burger->takeDamage(10);
    EXPECT_TRUE(burger->getStat() > 0);
}

TEST(BerserkerTests, rageLostTest) {
    Berserker* burger = new Berserker("Burger", 100.0, 200.0);
    Enemy* testEnemy = new Enemy();
    burger->setStat(10.0);
    burger->specialAttack(testEnemy);
    EXPECT_LT(burger->getStat(), 10);
}

TEST(BerserkerTests, statCapTest) {
    Berserker* burger = new Berserker("Burger", 100.0, 200.0);
    Enemy* testEnemy = new Enemy();
    burger->setStat(99.0);
    testEnemy->attack(burger);
    EXPECT_EQ(burger->getStat(), 100.0);
}

TEST(EnemyTests, diesProperly) {
    Enemy* jose = new Enemy("Jose", 1.0, 0.0);
    jose->takeDamage(10);
    EXPECT_FALSE(jose->getAlive());
}

// int main() {
//     string playerName = "Peg";
//     double playerHP = 100.0;
//     double playerATK = 10.0;
//     // Berserker* testPlayer = new Berserker(playerName, playerHP, playerATK);
//     Rogue* testPlayer = new Rogue(playerName, playerHP, playerATK);
//     Enemy* testEnemy = new Enemy("Jerry", 200.0, 5.0);
//     cout << "Enemy " << testEnemy->getName() << " encoutnered!!! its health is " << testEnemy->getMaxHealth() << "!!!" << endl;
//     while (testEnemy->getAlive()) {
//         testPlayer->specialAttack(testEnemy);
//         cout << testEnemy->getName() << " has been attacked, it has " << testEnemy->getCurrHealth() << " hp left!" << endl;
//         cout << "You have " << testPlayer->getStat() << " rage." << endl;
//         testEnemy->attack(testPlayer);
//         cout << testEnemy->getName() << " attacks " << testPlayer->getName() << " (you)! you now have " << testPlayer->getCurrHealth() << " hp left! :o" << endl;
//         cout << "You have " << testPlayer->getStat() << " rage." << endl;
//         cout << endl;
//     }
//     cout << testEnemy->getName() << " is dead!" << endl;

//     return 0;
// }