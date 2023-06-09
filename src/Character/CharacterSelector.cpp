#include "CharacterSelector.h"
#include "AllCharacters.h"
#include <iostream>
#include <string>
using namespace std;




CharacterSelector::CharacterSelector(const string& name) {
    Berserker* exampleBerserker = new Berserker(name, 100.0, 10.0);
    Rogue* exampleRogue = new Rogue(name, 100.0, 10.0);
    int choice = 0;
    
    cout << ">>> 1 - " << exampleBerserker->getPlayerType() << "<<<" << endl;
    cout << endl;
    cout << exampleBerserker->getDescription() << endl;
    cout << endl;
    cout << ">>> 2 - " << exampleRogue->getPlayerType() << " <<<" << endl;
    cout << endl;
    cout << exampleRogue->getDescription() << endl;
    cout << endl << endl;
    cout << "Please select the character you would like to play (1-2):" << endl;
    getInput(choice);
    switch (choice) {
        case 1:
            playerChar = exampleBerserker;
            delete exampleRogue;
            break;
        case 2:
            playerChar = exampleRogue;
            delete exampleBerserker;
            break;
    }
}

CharacterSelector::~CharacterSelector(){
    delete playerChar;
}

void CharacterSelector::getInput(int& choice) {
    cin >> choice;
    while(!cin){
        cout << "Sorry, that input is incorrect. Please enter a number between 1-2." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> choice;
    }
    if (choice != 1 && choice != 2) {
        cout << "Sorry, that input is incorrect. Please enter a number between 1-2." << endl;
        getInput(choice);
    }
}

Player* CharacterSelector::getPlayer() const {
    return playerChar;
}
