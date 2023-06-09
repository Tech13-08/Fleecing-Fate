#include <iostream> 
#include <cstring> 
#include <string> 

#include "game.h"
#include "title.h"

using namespace std; 

int main() { 
    Title* titleScreen = new Title();
    titleScreen->displayTitle();
    titleScreen->handleTitleInput();
    delete titleScreen;
    cout << endl;
    cout << "Enter a name: " << endl;
    string input = "";
    cin >> input;

    Game* game = new Game(input);
    game->runGame();

    return 0;
}