#ifndef PLAYER_H
#define PLAYER_H
#include "Character.h"
class Player : public Character {
public:
    Player(const string&, double, double);
    int getMaxStat() const;
    virtual int getStat() const = 0;
    virtual void specialAttack(Character* target) = 0;
    virtual void reset() = 0;
};

class Berseker : public Player {
private:
    const int MAXRAGE = 100;
    int rage = 0;
public:
    Berserker(const string&, double, double);
    int getStat() const override;
    int getRage() const;
    void setRage(int newRage);
    void specialAttack(Character* target) override;
    void reset() override;
    void takeDamage(double damage); // rage increases when damage is taken
};

class Rogue : public Player {
private:
    const int BASELUCK = 10;
    int luck = BASELUCK;
public:
    Rogue(const string&, double, double);
    int getStat() const override;
    int getLuck() const;
    void setLuck(int newLuck);
    void reset() override;
    void specialAttack(Character* target) override;
};

#endif