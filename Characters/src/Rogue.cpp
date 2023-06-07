#include "../include/Rogue.h"
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

void Rogue::specialAttack(Character* target) {
    double critChance = rand() % 100;
    if (critChance >= 99){
        target->takeDamage(10000);
        luck = BASELUCK;
    }
    else if (luck > critChance) {
        target->takeDamage(3*this->getStrength());
        luck = BASELUCK;
    }
    else {
        target->takeDamage(this->getStrength());
        luck += 10;
    }
}