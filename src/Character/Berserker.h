#include "Player.h"
#include <string>
using namespace std;

#ifndef BERSERKER_H
#define BERSERKER_H

class Berserker : public Player {
private:
    const int MAXRAGE = 100;
    int rage = 0;
    string statType = "RAGE";
    string description = "A short tempered drunkard that converts their anger into raw strength.\nTaking damage from enemies stores RAGE, which can be consumed to amplify attacks";
    string playerType = "BERSERKER";
public:
    Berserker(const string&, double, double);
    int getStat() const override;
    void setStat(int) override;
    int specialAttack(Character* target) override;
    void reset() override;
    void takeDamage(double damage) override; // rage increases when damage is taken
};

#endif