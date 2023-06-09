
#include "Dungeon.h"
#include "DungeonRoom.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

Dungeon::Dungeon(const string name, const string description, const int sizeScale) : MapManager(name, description, "Dungeon", sizeScale){
    this->populateMap();
}

bool Dungeon::isCompleted(){
    for(int i = 0; i < places.size(); ++i){
        if(!((DungeonRoom*)places.at(i))->isDefeated()){
            return false;
        }
    }
    return true;
}
