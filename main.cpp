#include <iostream> 
#include <cstring> 
#include <string> 

#include "game.h"


using namespace std; 

int main() { 
    cout << "Enter a name: " << endl;
    string input = "";
    cin >> input;

    Game* game = new Game(input);
    game->runGame();
    delete game;
    return 0;
}