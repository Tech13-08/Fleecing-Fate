#include <vector>
#include <string>
#include "LocationManager.h"
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
        lm->move(choice);
    }

   