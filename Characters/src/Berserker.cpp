#include "../include/Berserker.h"
#include <string>
using namespace std;

Berserker::Berserker(const string& name, double maxHealth, double strength) :
                Player(name, maxHealth, strength)
                {};

int Berserker::getStat() const {
    return getRage();
}

int Berserker::getRage() const {
    return rage;
}

void Berserker::setRage(int newRage) {
    rage = newRage;
}

void Berserker::specialAttack(Character* target) {
    int damage = (1.5 + rage/10.0)*(this->getStrength());
    target->takeDamage(damage);
    if (rage >= 10)
        setRage(rage-=10);
    else setRage(0);
}

void Berserker::reset() {
    setRage(0);
}

void Berserker::takeDamage(double damage) {
    this->Character::takeDamage(damage);
    if (rage < MAXRAGE) 
        rage += damage;
    if (rage > MAXRAGE)
        rage = MAXRAGE;
}