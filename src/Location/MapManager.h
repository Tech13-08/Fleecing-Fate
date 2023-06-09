#ifndef __MAPMANAGER_H__
#define __MAPMANAGER_H__
#include <string>
#include "Location.h"
#include "Store.h"
#include "DungeonRoom.h"
#include "BossRoom.h"
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
            //this->setSize(3);
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

        virtual void populateMap() = 0;

};

#endif // __PERSON_H__
