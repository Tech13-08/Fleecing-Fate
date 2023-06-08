#include <vector>
#include <string>
#include "LocationManager.h"
#include "MoveSelector.h"
#include "../Character/AllCharacters.h"
#include "../Inventory/Inventory.h"
using namespace std;
    
    MoveSelector::MoveSelector(){
      lm = new LocationManager();
    }

    void MoveSelector::moveMenu(Player* p, Inventory* inv){

        int choice = 0;
        lm->displayArea();
        cout << "What direction do you want to travel in? (Enter 0 to quit travelling)" << endl;
        cout << "1. North" << endl;
        cout << "2. South" << endl;
        cout << "3. East" << endl;
        cout << "4. West" << endl;
        cin >> choice;
        if(!cin){
          cin.clear();
          cin.ignore();
          cout << "Try entering a number for direction" << endl;
          moveMenu(p, inv);
          return;
        }
        if(choice == 0){
          return;
        }
        if(!lm->move(choice)){
          cin.clear();
          cin.ignore();
          cout << "You cannot move in that direction, try again" << endl;
          moveMenu(p, inv);
          return;
        }
        
        
          cout << "You are at (" << lm->x << ", " << lm->y << ") of size " << lm->maps.at(lm->currentMap)->getSize() << endl;
          locationEvent(p, inv);
          moveMenu(p, inv);
        
    }

    void MoveSelector::locationEvent(Player* p, Inventory* inv){
      Location* loc = lm->getLocation();
      if(loc){
        string input = "";
       
          if(loc->getType()=="Store"){
            ((Store*) loc)->storeMenu(inv);

          }
          if(loc->getType()=="DungeonRoom"){
            ((DungeonRoom*) loc)->battleEnemies(p);

          }
        
      }
      return;
    }