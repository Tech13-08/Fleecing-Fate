#include <iostream>
#include <stdlib.h>
#include <string>
#include "Battle.h"
#include "../Character/AllCharacters.h"
#include "../Inventory/Inventory.h"
#include "../Items/Item.h"
using namespace std;
Battle::Battle(Player* player, Enemy* enemy, Inventory* inv){
    this->player=player;
    this->enemy=enemy;
    this->inv = inv;
    this->battleMenu = new BattleMenu(); //make destructor
    int winloss = 0; //0 for in progress, 1 for win, 2 for loss CHANGE LATER
    int playerAP = 0;
}
// int Battle::getAP(){
//     return playerAP;
// }

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
        battleMenu->showAPSpent(100);
        battleMenu->showOutgoingAttack(damageDealt);
        playerAP -= 100;
    }
    else{
        cout << "Not enough AP!" << endl;
    }
}
void Battle::playerStrongAttack(){
    if(playerAP >= 200){
        int damageDealt = player->specialAttack(enemy);
        battleMenu->showAPSpent(200);
        battleMenu->showOutgoingAttack(damageDealt);
        playerAP -= 200;
    }
    else{
        cout << "Not enough AP!" << endl;
    }
}

void Battle::menu(){
    battleMenu->showMenu();
    int choice;
    cin >> choice;
    while(!cin){
        cout << "> ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> choice;
    }
    switch(choice){
        case 1:
            playerAttack();
        break;
        case 2:
            playerStrongAttack();
        break;
        case 3:{
            Item* currItem = inv->selectItem();
            if(currItem){
            if(currItem->getType()=="heal"){
                player->takeDamage(0-(currItem->getPower())); 
                cout << "Healed " << currItem->getPower() << endl;
                //take negative damage = heal
                //todo: display this            
            }
            else if(currItem->getType()=="attack"){
                enemy->takeDamage(currItem->getPower());
                cout << "Damaged " << currItem->getPower() << endl;
                //todo: display this
            }
            delete currItem;
            }}
        break;
        case 4:
            battleMenu->doNothing();
            return;
        break;
    }
    if(!(choice==1||choice==2||choice==3||choice==4)){
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
    battleMenu->showStatus(player, enemy, playerAP);
    menu();
}
void Battle::enemyTurn(){
    int damage = enemy->attack(player);
    battleMenu->showIncomingAttack(damage);
}

bool Battle::doBattle(){
    cout << "FIGHT START!" << endl;
    while(winloss==0){
        playerTurn();
        if(!enemy->getAlive()){
            cout << "enemy dead" << endl;
            winloss=1;
        }
        else{
            enemyTurn();
            if(player->getCurrHealth() <= 0){
                winloss=2;
            }
        }
    }
    if(winloss==1){
        int reward = enemy->getStrength();
        cout << "yay you win, here's " << reward << " coins" << endl;
        inv->add_money(reward);
        return true;
    }
    else{
        player->die();
        cout << "wow you suck" << endl;
        return false;
    }

}