
#include "BossLair.h"
#include <string>
#include <vector>
using std::string;
using std::vector;
class BossRoom;

BossLair::BossLair(const string name, const string description, const int sizeScale) : MapManager(name, description, "Boss Lair", sizeScale){
    this->populateMap();
    
}

bool BossLair::isCompleted(){
    for(int i = 0; i < places.size(); ++i){
        if(!((BossRoom*)places.at(i))->isDefeated()){
            return false;
        }
    }
    return true;
}


void BossLair::populateMap(){
    map[0][0] = new BossRoom("Wolves' Den", "This must be where all the wolves live" );
    places.push_back(map[0][0]);
}