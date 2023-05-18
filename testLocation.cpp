#include <iostream> 
#include <cstring> 
#include "Location/Village.h"
#include "Location/Store.h"
#include "Location/Dungeon.h"
#include "Location/DungeonRoom.h"

using namespace std; 

int main() { 
    Village* vil1 = new Village("Village A", "The first village ever");
    cout << "Location: " + vil1->getName() + " | " + vil1->getDescription() << endl;

    cout << "Looking for store at (0,1) in " + vil1->getName() + ".."<< endl;
    Store* store1 = (Store*)vil1->getLocation(0,1);
    if(store1){
        cout << "Found store!" << endl;
        cout << "Location: " + store1->getName() + " | " + store1->getDescription()<< endl;
        cout << "Items: " << endl;
        for (int i = 0; i < store1->getSize(); ++i){
            cout << store1->getItems().at(i)->getItem() << endl;
        }
        cout << "Buying item at index 1" << endl;
        cout << "Bought " + store1->buyItem(1)->getItem() << endl;
    }
    else{
        cout << "Store not found!" << endl;
    }

    Dungeon* dun1 = new Dungeon("Dungeon A", "The first dungeon ever");
    cout << "Location: " + dun1->getName() + " | " + dun1->getDescription() << endl;

    cout << "Looking for dungeon room at (0,2) in " + dun1->getName() + ".."<< endl;
    DungeonRoom* dr1 = (DungeonRoom*)dun1->getLocation(0,2);

    if(dr1){
        cout << "Found dungeon room!" << endl;
        cout << "Location: " + dr1->getName() + " | " + dr1->getDescription()<< endl;

        cout << "Enemies: " << endl;
        for (int i = 0; i < dr1->getSize(); ++i){
            cout << dr1->getEnemies().at(i)->getEnemy() << endl;
        }
    }
    else{
        cout << "Dungeon room not found!" << endl;
    }
}