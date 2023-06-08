
#include "DungeonRoom.h"
#include "../Character/AllCharacters.h"
#include "../Inventory/Inventory.h"
#include "../Battle/Battle.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
DungeonRoom::DungeonRoom(const string name, const string description) : Location(name, description, "DungeonRoom"){
    this->setSize(3);
    for (int i = 0; i < this->getSize(); ++i) {
        enemies.push_back(new Enemy());
    }
}

void DungeonRoom::battleEnemies(Player* p, Inventory* inv){
    displayLocation();
    for(int i = 0; i < getSize(); ++i){
        Battle* battle = new Battle(p, enemies[i], inv);
        cout << "A wild " << enemies[i]->getName() << " has appeared!" << endl;
        if(!battle->doBattle()){
            return;
        }
    }
    int reward = getSize()*10;
    cout << "Congrats! You beat the entire Dungeon Room! Your reward is " << reward << " coins!" << endl;
    inv->add_money(reward);
}
