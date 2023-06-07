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
    Berserker(const string&, double, double);
    int getStat() const override;
    int getRage() const;
    void setRage(int newRage);
    void specialAttack(Character* target) override;
    void reset() override;
    void takeDamage(double damage) override; // rage increases when damage is taken
};

#endif