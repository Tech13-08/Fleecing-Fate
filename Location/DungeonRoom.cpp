
#include "DungeonRoom.h"
#include "../Enemy.h"
#include <string>
#include <vector>
using std::string;
using std::vector;
DungeonRoom::DungeonRoom(const string name, const string description) : Location(name, description, "DungeonRoom", 3){
    enemies.resize(this->getSize(), nullptr);
    for (int i = 0; i < this->getSize(); ++i) {
        enemies[i] = new Enemy(i);
    }
}

const vector<Enemy*> DungeonRoom::getEnemies(){
    return this->enemies;
}
