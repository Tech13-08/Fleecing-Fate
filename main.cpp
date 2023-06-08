#include <iostream> 
#include <cstring> 
#include "src/Location/MoveSelector.h"

using namespace std; 

int main() { 
    MoveSelector* ms = new MoveSelector();

    string input = "";
    while(input != "q"){
        cout << endl;
        ms->moveMenu();
        cout << "Quit? (q): ";
        cin >> input;
    }
    return 0;
}