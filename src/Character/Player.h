#include "Character.h"
#include <string>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player : public Character {
private:
    string statType;
    string description;
    string playerType;
public:
    Player(const string&, double, double);
    int getMaxStat() const;
    virtual int getStat() const = 0;
    virtual void setStat(int) = 0;
    virtual string getStatType() const;
    virtual string getDescription() const;
    virtual string getPlayerType() const;
    virtual int specialAttack(Character* target) = 0;
    virtual void reset() = 0;
};

#endif