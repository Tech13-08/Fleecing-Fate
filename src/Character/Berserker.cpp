#include "Berserker.h"
#include <string>
using namespace std;

Berserker::Berserker(const string& name, double maxHealth, double strength) :
                Player(name, maxHealth, strength)
                {};


int Berserker::getStat() const {
    return rage;
}

void Berserker::setStat(int newRage) {
    rage = newRage;
}

int Berserker::specialAttack(Character* target) {
    int damage = (1.5 + rage/10.0)*(this->getStrength());
    if (rage >= 10)
        setStat(rage-=10);
    else setStat(0);
    return dealDamage(target, damage);
}

void Berserker::reset() {
    setStat(0);
}

void Berserker::takeDamage(double damage) {
    this->Character::takeDamage(damage);
    if (rage < MAXRAGE) 
        rage += damage;
    if (rage > MAXRAGE)
        rage = MAXRAGE;
}