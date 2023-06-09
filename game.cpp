#include <iostream> 
#include <cstring> 
#include <string>
#include "game.h"
using namespace std;

Game::Game(string playerName){
    inv = new Inventory();
    charselect = new CharacterSelector(playerName);
    p = charselect->getPlayer();
    lm = new LocationManager();
    locMove = new LocationMove(p, inv, lm);
};

Game::~Game(){
    delete inv;
    delete charselect;
    delete lm;
    delete locMove;
}

void Game::runGame(){
    int numinput = 0;
    while(p->getAlive() && !lm->bossBeat() && !quit){
        displayMenu();
        cin >> numinput;
        if(!cin){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            runGame();
        }
        handleInput(numinput);

        cout << endl;
    }
    handleGameOver();
}

void Game::displayMenu(){
    //cout << lm->bossBeat() << " " << p->getAlive() << " " << quit << endl;
    cout << "What would you like to do? (0 to exit game)" << endl;
    cout << "1. Move" << endl;
    cout << "2. View Inventory" << endl;
    cout << "3. Rest" << endl;
    cout << "4. Stats" << endl;
}

void Game::handleInput(int input){
    switch(input){
        case 0:
        quit = true;
        return;
        case 1:
        locMove->moveMenu();
        break;
        case 2:
        inv->displayInventory();
        break;
        case 3:
        cout << p->rest(); //ask ting to create a function to heal player to maxhp
        break;
        case 4: 
        cout << p->getInfo();
        break;
    }
}

void Game::handleGameOver(){
    if(p->getAlive()){
        if(lm->bossBeat()){
            cout << "Congratulations, you successfully brought peace to the sheep!" << endl;
            return;
        }
        cout << "Game quit, you've let down the sheep" << endl;
        return;
    }
    cout << "You are dead. You don't feel like moving anymore. "<<endl;
}