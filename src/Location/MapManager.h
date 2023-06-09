#ifndef __MAPMANAGER_H__
#define __MAPMANAGER_H__
#include <string>
#include "Location.h"
#include "Store.h"
#include "DungeonRoom.h"
#include <vector>
using std::string;
using std::vector;

class MapManager : public Location{
    private:
        const int minSize = 3;
        const int maxSize = 5;
    protected:
        vector<vector<Location*>> map;
        vector<Location*> places;

    public:
        MapManager(const string name, const string description, const string type, const int sizeScale) : Location(name, description, type){
            srand((unsigned)time(0)); 
            this->setSize((rand()%((maxSize+1-minSize)*sizeScale))+(minSize*sizeScale));
            map.resize(this->getSize(), vector<Location*>(this->getSize(), nullptr));
        }

        Location* getLocation(int row, int col){
            if(!inRange(row, col)){
                throw string("Out of bounds");
            }
            Location* loc = this->map.at(row).at(col);
            if(loc){return loc;}
            return nullptr;
        }

        bool inRange(int row, int col){
            return row >= 0 && row < this->getSize() && col >= 0 && col < this->getSize();
        }

        void populateMap(){
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
                if(this->getType() == "Village"){
                    map[i][j] = new Store("Store " + std::to_string(n+1), "It's literally just a store mate");
                }
                if(this->getType() == "Dungeon"){
                    map[i][j] = new DungeonRoom("DungeonRoom " + std::to_string(n+1), "DUNGEON ROOM JUMPSCARE BOO");
                }
                places.push_back(map[i][j]);
            }
        }

};

#endif // __PERSON_H__
