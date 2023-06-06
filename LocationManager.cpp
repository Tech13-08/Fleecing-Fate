
#include "LocationManager.h"
#include <iostream>
#include <vector>
#include <string>
#include "Dungeon.h"
#include "MapManager.h"
using namespace std;
    
    LocationManager::LocationManager(){
      vector<MapManager*> maps;
      int currentMap = 0;
      x = 0;
      y = 0;
      MapManager* DungeonLocation = new Dungeon("Cave of Danger", "This is the Dungeon.", 1);
      MapManager* VillageLocation = new Village("Town", "const string description", 1);
      locationlist.push_back(VillageLocation);
      locationlist.push_back(DungeonLocation);
    }

    bool LocationManager::move(string input)){ //ask why this is a bool
      int size = maps.at(currentMap)->getSize();

      if(input == "north"){
        
      }
      if(input == "south"){

      }
      if(input == "east"){

      }
      if(input == "west"){

      }
    }

    Location* LocationManager::getLocation() const{
      return maps.at(currentMap)->getLocation(x, y);
    }

    void LocationManager::setLocation(int mapindex){
      currentmap = mapindex;
    }

    const int* LocationManager::getCurrPos() const{
      return Coord;
    }

    void LocationManager::setCurrPos(int thisx, int thisy){
      x = thisx;
      y = thisy;
      setLocation();
    }