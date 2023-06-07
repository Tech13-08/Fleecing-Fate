#include "Character.h"
#include "Player.h"
#include <iostream>
#include <stream>

void CharacterSelector() {
    int choice;
    cout << ">>> 1 - The Berserker <<<" << endl;
    cout << "A short tempered drunkard that converts 
        their anger into raw strength." << endl;
    cout << "Taking damage from enemies stores rage, 
        which can be consumed to amplify attacks." 
        << endl;
    cout << endl;
    cout << ">>> 2 - The Rogue <<<" << endl;
    cout << "A gambler gone rogue after losing all of
        their savings on gamba." << endl;
    cout << "Attacks have a chance to hit harder.
        Failing this chance increases the crit
        chance of the next attack." << endl;
    cout << endl;
    cout << "Please select the character 
        you would like to play." << endl;
    cin >> choice;
    switch (choice) {
        case 1:
            // Berserker
        case 2:
            // Rogue
    }
}