#include <iostream>
#include <stdlib.h>
#include <string>
#include "battle.h"
using namespace std;
Battle::Battle(){
    int playerHP = 100;
    int playerATK = 25;
    int enemyHP = 100;
    int enemyATK = 15;
    int winloss = 0; //0 for in progress, 1 for win, 2 for loss CHANGE LATER
    int playerAP = 0;
}
void Battle::displayStatus(){
    cout << "-----------" << endl;
    cout << "Your HP: " << playerHP << endl;
    cout << "Your AP: " << playerAP << endl;
    cout << endl;
    cout << "Enemy HP: " << enemyHP << endl;
    cout << endl;
}

int Battle::calcDamage(int baseDamage){
    int variance = rand()%10 - 5; //-5 to 5
    return baseDamage + variance;
}
int Battle::calcDamageWithCrit(int baseDamage, int critChance){
    int variance = rand()%10 - 5; //-5 to 5
    int critRoll = rand()%100 + 1; //1 to 100
    if(critChance >= critRoll){
        cout << "Critical hit!" << endl;
        return 2*(baseDamage + variance);
    }
    else{
        return baseDamage + variance;
    }
}
void Battle::playerAttack(){ //replace these later when we actually get characters
    if(playerAP >= 100){
        int damageDealt = calcDamage(playerATK);
        cout << "You spend 100 AP to attack" << endl;
        cout << "Enemy takes " << damageDealt << " damage" << endl;
        playerAP -= 100;
        enemyHP -= damageDealt;
    }
    else{
        cout << "Not enough AP!" << endl;
    }
}
void Battle::playerStrongAttack(){
    if(playerAP >= 200){
        int damageDealt = 1.5*calcDamageWithCrit(playerATK,20);
        cout << "You spend 200 AP to do a strong attack" << endl;
        cout << "Enemy takes " << damageDealt << " damage" << endl;
        playerAP -= 200;
        enemyHP -= damageDealt;
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
            playerAttack();
        break;
        case '2':
            playerStrongAttack();
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
    cout << "Enemy attacks you for " << calcDamage(enemyATK) << " damage" << endl;
    playerHP -= calcDamage(enemyATK);

}
bool Battle::doBattle(){
    while(winloss==0){
        playerTurn();
        if(enemyHP <= 0 ){
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