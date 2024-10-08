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
    Player(const string&, int, int);
    int getMaxStat() const;
    virtual int getStat() const = 0;
    virtual void setStat(int) = 0;
    virtual string getStatType() const;
    virtual string getDescription() const;
    virtual string getPlayerType() const;
    void setStatType(const string&);
    void setDescription(const string&);
    void setPlayerType(const string&);
    virtual int specialAttack(Character*) = 0;
    string rest();
    virtual void reset() = 0;
    virtual string getInfo() = 0;
};

#endif