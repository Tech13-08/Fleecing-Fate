#include "Player.h"
#include <string>
using namespace std;

#ifndef BERSERKER_H
#define BERSERKER_H

class Berserker : public Player {
private:
    const int MAXRAGE = 100;
    int rage = 0;
public:
    Berserker(const string&, int, int);
    int getStat() const override;
    void setStat(int) override;
    int specialAttack(Character* target) override;
    void reset() override;
    string getInfo() override;
    void takeDamage(int damage) override; // rage increases when damage is taken
};

#endif