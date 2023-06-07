#include "Rogue.h"
#include <string>
using namespace std;

Rogue::Rogue(const string& name, double maxHealth, double strength) :
                Player(name, maxHealth, strength)
                {};

int Rogue::getStat() const {
    return getLuck();
}

int Rogue::getLuck() const {
    return luck;
}

void Rogue::setLuck(int newLuck) {
    luck = newLuck;
}

void Rogue::reset() {
    luck = BASELUCK;
}

int Rogue::specialAttack(Character* target) {
    double critChance = rand() % 100;
    if (critChance >= 99){
        luck = BASELUCK;
        return dealDamage(target, 10000);
    }
    else if (luck > critChance) {
        luck = BASELUCK;
        return dealDamage(target, 3*this->getStrength());
    }
    else {
        luck += 10;
        return dealDamage(target, this->getStrength());
    }
}