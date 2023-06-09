
#include "DungeonRoom.h"
#include "../Character/AllCharacters.h"
#include "../Inventory/Inventory.h"
#include "../Battle/Battle.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
DungeonRoom::DungeonRoom(const string name, const string description) : Location(name, description, "DungeonRoom"){
    srand((unsigned)time(0)); 
    this->setSize((rand()%2) + 1);
    for (int i = 0; i < this->getSize(); ++i) {
        enemies.push_back(new Enemy());
    }
}

void DungeonRoom::battleEnemies(Player* p, Inventory* inv){
    if(!isDefeated()){
        cout << "You have already defeated this Dungeon Room, try looking for others" << endl;
        return;
    }
    displayLocation();
    for(int i = 0; i < getSize(); ++i){
        Battle* battle = new Battle(p, enemies[i], inv);
        cout << "A wild " << enemies[i]->getName() << " has appeared! (" << (i+1) << " out of " << getSize() <<" enemies)" << endl;
        if(!battle->doBattle()){
            return;
        }
    }
    defeated = true;
    int reward = getSize()*10;
    cout << "Congrats! You massacred the wolves! Your reward is " << reward << " coins!" << endl;
    inv->add_money(reward);
}

bool DungeonRoom::isDefeated(){
    return defeated;
}