#include <vector>
#include <string>
#include "AllLocations.h"
#include "LocationManager.h"
using namespace std;
    
    LocationManager::LocationManager(){
      currentMap = 0;
      x = 0;
      y = 0;
      MapManager* DungeonLocation = new Dungeon("Cave of Danger", "This is the Dungeon.", 1);
      MapManager* VillageLocation = new Village("Town", "Your happy town with sheeps!", 1);
      BossLocation = new BossLair("Wolves' Den", "This must be where all the wolves live", 1);
      
      maps.push_back(VillageLocation);
      maps.push_back(DungeonLocation);
    }

    bool LocationManager::move(int direction){
        int size = maps.at(currentMap)->getSize();
        bool moveable = false;

        switch(direction){
          case 1:
            moveable = y + 1 < size;
            y = moveable ? (y + 1) : y;
            break;
          case 2:
            moveable = y - 1 >= 0;
            y = moveable ? (y - 1) : y;
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
            moveable = x - 1 >= 0;
            x = moveable ? (x - 1) : x;
            if(!moveable && currentMap > 0){
              setLocation(currentMap - 1);
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

    int LocationManager::getX(){
      return x;
    }
    int LocationManager::getY(){
      return y;
    }
    int LocationManager::getSize(){
      return maps.at(currentMap)->getSize();
    }

    bool LocationManager::complete(){
      for(int i = 0; i < maps.size(); i++){
        if((maps.at(i))->getType() == "Dungeon"){
          if(!(((Dungeon*)maps.at(i))->isCompleted())){
            return false;
          }
        }
      }
      return true;
    }

    void LocationManager::completeHandler(){
      if(complete()){
        cout << "------------------------------------" << endl;
        cout << "You feel the need to move east..." << endl;
        cout << "------------------------------------" << endl;
        maps.push_back(BossLocation);
      }
    }

    bool LocationManager::bossBeat(){
      return ((BossLair*)BossLocation)->isCompleted();
    }



 
