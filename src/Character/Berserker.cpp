#include "Berserker.h"
#include <string>
using namespace std;

Berserker::Berserker(const string& name, double maxHealth, double strength) :
                Player(name, maxHealth, strength) {
    setStatType("RAGE");
    setDescription("A short tempered drunkard that converts their anger into raw strength.\nTaking damage from enemies stores RAGE, which can be consumed to amplify attacks");
    setPlayerType("Berserker");
};


int Berserker::getStat() const {
    return rage;
}

void Berserker::setStat(int newRage) {
    rage = newRage;
}

int Berserker::specialAttack(Character* target) {
    int damage = (1.5 + rage/10.0)*(this->getStrength());
    if (rage >= 20)
        setStat(rage-=20);
    else setStat(0);
    return dealDamage(target, damage);
}

void Berserker::reset() {
    setStat(0);
}

void Berserker::takeDamage(double damageTaken) {
    this->Character::takeDamage(damageTaken);
    if (rage < MAXRAGE) 
        rage += damageTaken;
    if (rage > MAXRAGE)
        rage = MAXRAGE;
}