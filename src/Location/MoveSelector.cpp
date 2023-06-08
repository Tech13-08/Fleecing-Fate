#include <vector>
#include <string>
#include "LocationManager.h"
#include "MoveSelector.h"
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
        }else{
          cout << "You are at (" << lm->x << ", " << lm->y << ") of size " << lm->maps.at(lm->currentMap)->getSize() << endl;
        }
    }

   