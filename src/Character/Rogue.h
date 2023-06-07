#include "Player.h"
#include <string>
using namespace std;

#ifndef ROGUE_H
#define ROGUE_H

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
    int specialAttack(Character* target) override;
};

#endif