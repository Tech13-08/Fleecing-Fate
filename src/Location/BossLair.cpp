
#include "BossLair.h"
#include "BossRoom.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

BossLair::BossLair(const string name, const string description, const int sizeScale) : MapManager(name, description, "Wolves' Den", sizeScale){
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
    map[2][2] = new BossRoom("Wolves' Den", "This must be where all the wolves live" );
    places.push_back(map[2][2]);
}