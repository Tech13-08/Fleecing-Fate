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
    cin >> choice;

    switch (choice) {
        case 1:
            playerChar = exampleBerserker;
            delete exampleRogue;
        case 2:
            playerChar = exampleRogue;
            delete exampleBerserker;
    }
}

Player* CharacterSelector::getPlayer() const {
    return playerChar;
}