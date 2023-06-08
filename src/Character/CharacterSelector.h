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
    Player* getPlayer() const;
};

#endif