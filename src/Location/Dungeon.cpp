
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
    cout << "Number of Dungeon Rooms: " << places.size() << endl;
    for(int i = 0; i < places.size(); ++i){

        cout << i+1 << ". " << ((DungeonRoom*)places.at(i))->isDefeated() << endl;
        if(!(((DungeonRoom*)places.at(i))->isDefeated())){
            return false;
        }
    }
    return true;
}

void Dungeon::populateMap(){
            srand((unsigned)time(0)); 
            int i = 0;
            int j = 0;
            for(int n = 0; n < this->getSize()/2 + 1; ++n){
                i = rand()%(this->getSize()-1);
                j = rand()%(this->getSize()-1);
                while(map[i][j]){
                    i = rand()%(this->getSize()-1);
                    j = rand()%(this->getSize()-1);
                }
                    map[i][j] = new DungeonRoom("DungeonRoom " + std::to_string(n+1), "DUNGEON ROOM JUMPSCARE BOO");
                
                places.push_back(map[i][j]);
            }
            
        }
