
#include "DungeonRoom.h"
#include "../Character/AllCharacters.h"
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

void DungeonRoom::battleEnemies(Player* p){
    displayLocation();
    for(int i = 0; i < getSize(); ++i){
        Battle* battle = new Battle(p, enemies[i]);
        if(!battle->doBattle()){
            return;
        }
    }
}
