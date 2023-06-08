#include "Player.h"
#include <string>
using namespace std;

#ifndef ROGUE_H
#define ROGUE_H

class Rogue : public Player {
private:
    const int BASELUCK = 10;
    int luck = BASELUCK;
    string statType = "LUCK";
    string description = "A gambler gone rogue after losing all of their savings on gamba.\nAttacks have a chance to crit. Failing this chance increases the crit chance of the next attack.";
    string playerType = "ROGUE";
public:
    Rogue(const string&, double, double);
    int getStat() const override;
    void setStat(int) override;
    void reset() override;
    int specialAttack(Character* target) override;
};

#endif