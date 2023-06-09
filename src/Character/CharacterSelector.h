#include "AllCharacters.h"
#include <string>
using namespace std;

#ifndef CHARACTERSELECTOR_H
#define CHARACTERSELECTOR_H

class CharacterSelector {
private:
    Player* playerChar;
public:
    CharacterSelector(const string&);
    void getInput(int&);
    Player* getPlayer() const;
};

#endif