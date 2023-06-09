#include "Player.h"
#include <string>
using namespace std;

#ifndef ROGUE_H
#define ROGUE_H

class Rogue : public Player {
private:
    const int BASELUCK = 20;
    int luck = BASELUCK;;
public:
    Rogue(const string&, double, double);
    int getStat() const override;
    void setStat(int) override;
    void reset() override;
    string getInfo() override;
    int specialAttack(Character*) override;
};

#endif