#include "title.h"
#include <string>
#include <iostream>
using namespace std;

void Title::displayTitle(){
    cout << "FLEECING FATE: Wooly Retribution" << endl;
    cout << "A text-based RPG" << endl << endl;
    cout << "Enter any number to continue, or 1 to see the tutorial." << endl;
}

void Title::handleTitleInput(){
    int input;
    cin >> input;
    if(!cin){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        handleTitleInput();
    }
    switch(input){
        case 1: displayTutorial();
        return;
        default:
        return;
    }
}

void Title::displayTutorial() {
    cout << "You are Emma See, a young sheep farmer born and raised in the sheep-farming village of Sheepfarmerville. One morning, all of the sheep in your village suddenly disappeared. As it turns out, the wolves in the nearby dungeon ran off with your town's poor, poor sheep. As the only able-bodied farmer in your town of all elderly folk, you are called to action to defeat the wolves and return the missing sheep.\nGameplay: Defeat the wolves. Rest and stock up on items at your village with the gold you obtain from defeating wolves to advance deeper into the dungeon's depths and take revenge for Sheepfarmerville. Good luck, brave farmer!" << endl;
}