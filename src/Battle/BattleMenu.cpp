#include <iostream>
#include "BattleMenu.h"
#include "../Character/AllCharacters.h"

BattleMenu::BattleMenu(){
}
void BattleMenu::showStatus(Player* player, Enemy* enemy, int ap){
    cout << "-----------" << endl;
    cout << player->getInfo() << endl;
    cout << "Your AP: " << ap << endl;
    cout << endl;
    cout << "Enemy HP: " << enemy->getCurrHealth() << endl;
    cout << endl;
}
void BattleMenu::doNothing(){
    cout << "Did nothing." << endl;
}
void BattleMenu::showOutgoingAttack(int dmg){
    cout << "You attack the enemy for " << dmg << " damage!" << endl;
}
void BattleMenu::showIncomingAttack(int dmg){
    cout << "Enemy attacks you for " << dmg << " damage!" << endl;
}
void BattleMenu::showAPSpent(int ap){
    cout << "You use " << ap << " AP." << endl;
}
void BattleMenu::showMenu(){
    cout << "What do you want to do?" << endl;
    cout << "1. Attack (100 AP)" << endl;
    cout << "2. Strong attack (200 AP)" << endl;
    cout << "3. Item" << endl;
    cout << "4. Do nothing (end turn)" << endl;
    cout << "> ";
}
