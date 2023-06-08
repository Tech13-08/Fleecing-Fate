#include <iostream> 
#include <cstring> 
#include "src/Location/MoveSelector.h"
#include "src/Character/CharacterSelector.h"
#include "src/Inventory/Inventory.h"
#include "src/Character/AllCharacters.h"


using namespace std; 

int main() { 
    MoveSelector* ms = new MoveSelector();
    Inventory* inv = new Inventory();

    cout << "Enter a name: " << endl;
    string input = "";
    cin >> input;
    CharacterSelector* charselect = new CharacterSelector(input);
    Player* p = charselect->getPlayer();

    
    int numinput = 0;
    while(p->getAlive()){
        cout << "What would you like to do?" << endl;
        cout << "1. Move" << endl;
        cout << "2. View Inventory" << endl;
        cout << "3. Rest" << endl;
        cin >> numinput;
        if(!cin){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        switch(numinput){
          case 1:
            ms->moveMenu(p, inv);
                //ms->locationEvent(p, inv);
            break;
          case 2:
            inv->displayInventory();
            break;
          case 3:
            //rest(); //ask ting to create a function to heal player to maxhp
            break;
          case 4: 
            
            break;
        }

        cout << endl;
        //ms->moveMenu();

        //ms->locationEvent(p, inv);
    }
    cout << "You are dead. You don't feel like moving anymore. ";
    return 0;
}