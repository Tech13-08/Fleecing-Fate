#include <iostream>
#include <stdlib.h>
#include <string>
#include "Battle.h"
#include "../Character/AllCharacters.h"
using namespace std;
Battle::Battle(Player* player, Enemy* e){
    this->player=player;
    this->enemy=e;
    int winloss = 0; //0 for in progress, 1 for win, 2 for loss CHANGE LATER
    int playerAP = 0;
}
void Battle::displayStatus(){
    cout << "-----------" << endl;
    cout << "Your HP: " << player->getCurrHealth() << endl;
    cout << "Your AP: " << playerAP << endl;
    cout << endl;
    cout << "Enemy HP: " << enemy->getCurrHealth() << endl;
    cout << endl;
}

// int Battle::calcDamage(int baseDamage){
//     int variance = rand()%10 - 5; //-5 to 5
//     return baseDamage + variance;
// }
// int Battle::calcDamageWithCrit(int baseDamage, int critChance){
//     int variance = rand()%10 - 5; //-5 to 5
//     int critRoll = rand()%100 + 1; //1 to 100
//     if(critChance >= critRoll){
//         cout << "Critical hit!" << endl;
//         return 2*(baseDamage + variance);
//     }
//     else{
//         return baseDamage + variance;
//     }

// }
void Battle::playerAttack(){ //replace these later when we actually get characters
    if(playerAP >= 100){
        int damageDealt = player->attack(enemy);
        cout << "You spend 100 AP to attack" << endl;
        cout << "Enemy takes " << damageDealt << " damage" << endl;
        playerAP -= 100;
    }
    else{
        cout << "Not enough AP!" << endl;
    }
}
void Battle::playerStrongAttack(){
    if(playerAP >= 200){
        int damageDealt = player->specialAttack(enemy);
        cout << "You spend 200 AP to do a strong attack" << endl;
        cout << "Enemy takes " << damageDealt << " damage" << endl;
        playerAP -= 200;
    }
    else{
        cout << "Not enough AP!" << endl;
    }
}
void Battle::doNothing(){
    cout << "Did nothing" << endl;
}
void Battle::menu(){
    cout << "What do you want to do?" << endl;
    cout << "1. Attack (100 AP)" << endl;
    cout << "2. Strong attack (200 AP)" << endl;
    cout << "3. Do nothing (end turn)" << endl;
    cout << "> ";
    char choice;
    cin >> choice;
    switch(choice){
        case '1':
            playerAttack(enemy);
        break;
        case '2':
            playerStrongAttack(enemy);
        break;
        case '3':
            doNothing();
            return;
        break;
    }
    if(!(choice=='1'||choice=='2'||choice=='3')){
        cout << "Invalid choice." << endl;
        menu();
    }
    if(playerAP > 0){
        cout << "You still have " << playerAP <<" AP remaining. Take another action?" << endl;
        menu();
    }
}
void Battle::playerTurn(){
    playerAP+=100;
    displayStatus();
    menu();
}
void Battle::enemyTurn(){
    int damage = enemy->attack(player);
    cout << "Enemy attacks you for " << dmg << " damage" << endl;
}

bool Battle::doBattle(){
    while(winloss==0){
        playerTurn();
        if(!enemy->getAlive()){
            cout << "enemy dead" << endl;
            winloss=1;
        }
        else{
            enemyTurn();
        }
    }
    if(winloss=1){
        cout << "yay you win" << endl;
        return true;
    }
    return false;
}