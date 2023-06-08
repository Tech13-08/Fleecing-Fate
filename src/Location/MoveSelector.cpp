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

    void MoveSelector::moveMenu(){
        int choice = 0;
        lm->displayArea();
        cout << "What direction do you want to travel in?" << endl;
        cout << "1. North" << endl;
        cout << "2. South" << endl;
        cout << "3. East" << endl;
        cout << "4. West" << endl;
        cin >> choice;
        if(!lm->move(choice)){
          cout << "You cannot move in that direction, try again" << endl;
          moveMenu();
        }else{
          cout << "You are at (" << lm->x << ", " << lm->y << ") of size " << lm->maps.at(lm->currentMap)->getSize() << endl;
        }
    }
    void MoveSelector::locationEvent(Player* p, Inventory* inv){
      Location* loc = lm->getLocation();
      if(loc){
        string input = "";
        while(input != "q"){
          if(loc->getType()=="Store"){
            ((Store*) loc)->storeMenu(inv);
            cout << "Would you like to continue shopping or quit? (any key/q)" << endl;
            cin >> input;
          }
          if(loc->getType()=="DungeonRoom"){
            ((DungeonRoom*) loc)->battleEnemies(p);
            cout << "Would you like to continue shopping or quit? (any key/q)" << endl;
            cin >> input;
          }
        }
      }
      return;
    }

   