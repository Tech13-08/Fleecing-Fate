#include <vector>
#include <string>
#include "AllLocations.h"
using namespace std;
    
    LocationManager::LocationManager(){
      currentMap = 0;
      x = 0;
      y = 0;
      MapManager* DungeonLocation = new Dungeon("Cave of Danger", "This is the Dungeon.", 1);
      MapManager* VillageLocation = new Village("Town", "const string description", 1);
      maps.push_back(VillageLocation);
      maps.push_back(DungeonLocation);
    }

    bool LocationManager::move(string direction){
        int size = maps.at(currentMap)->getSize();
        bool moveable = false;

        if(direction == "north"){
            moveable = y - 1 >= 0;
            y = moveable ? (y - 1) : y;
        }
        if(direction == "south"){
            moveable = y + 1 < size;
            y = moveable ? (y + 1) : y;
        }
        if(direction == "east"){
            moveable = x - 1 >= 0;
            x = moveable ? (x - 1) : x;
            if(!moveable && currentMap > 0){
              setLocation(currentMap - 1);
              return true;
            }
        }
        if(direction == "west"){
            moveable = x + 1 >= 0;
            x = moveable ? (x + 1) : x;
            if(!moveable && currentMap > 0){
              setLocation(currentMap + 1);
              return true;
            }
        }
        return moveable;
    }

    Location* LocationManager::getLocation() const{
      return maps.at(currentMap)->getLocation(x, y);
    }

    void LocationManager::setLocation(int mapIndex){
      if(currentMap != mapIndex){
        x = 0;
        y = 0;
        currentMap = mapIndex;
      }
    }
    
    void LocationManager::displayLocation(){
      cout << "You are in the ";
      cout << maps.at(currentMap)->getType();
      cout << ": ";
      cout << maps.at(currentMap)->getName();
      cout << ". "
      cout << maps.at(currentMap)->getDescription();      
      cout << endl;
    }

