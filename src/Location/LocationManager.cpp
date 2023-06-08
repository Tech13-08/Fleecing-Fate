#include <vector>
#include <string>
#include "AllLocations.h"
#include "LocationManager.h"
using namespace std;
    
    LocationManager::LocationManager(){
      currentMap = 0;
      x = 0;
      y = 0;
      MapManager* DungeonLocation = new Dungeon("Cave of Danger", "This is the Dungeon.", 2);
      MapManager* VillageLocation = new Village("Town", "const string description", 1);
      maps.push_back(VillageLocation);
      maps.push_back(DungeonLocation);
    }

    bool LocationManager::move(int direction){
        int size = maps.at(currentMap)->getSize();
        bool moveable = false;

        switch(direction){
          case 1:
            moveable = y - 1 >= 0;
            y = moveable ? (y - 1) : y;
            break;
          case 2:
            moveable = y + 1 < size;
            y = moveable ? (y + 1) : y;
            break;
          case 3:
            moveable = x - 1 >= 0;
            x = moveable ? (x - 1) : x;
            if(!moveable && currentMap > 0){
              setLocation(currentMap - 1);
              return true;
            }
            break;
          case 4: 
            moveable = x + 1 < size;
            x = moveable ? (x + 1) : x;
            if(!moveable && currentMap < maps.size()-1){
              setLocation(currentMap + 1);
              return true;
            }
            break;
        }
        return moveable;
    }

    Location* LocationManager::getLocation() const{
      try
      {
          if(maps.at(currentMap)->getLocation(x, y)){
            return maps.at(currentMap)->getLocation(x, y);
          }else{
            cout << "You have landed no where! Try looking around to find places here." << endl;
          }
      }
      catch(string e)
      {
          cout << "You are somehow out of map bounds! Try a different direction!" << endl;
      }
      return nullptr;
      
    }

    void LocationManager::setLocation(int mapIndex){
      if(currentMap != mapIndex){
        x = 0;
        y = 0;
        currentMap = mapIndex;
      }
    }
    
    void LocationManager::displayArea(){
      maps.at(currentMap)->displayLocation();
    }
