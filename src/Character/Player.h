#include "Character.h"
#include <string>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player : public Character {
public:
    Player(const string&, double, double);
    int getMaxStat() const;
    virtual int getStat() const = 0;
    virtual void specialAttack(Character* target) = 0;
    virtual void reset() = 0;
};

#endif