#include "Player.h"
#include <string>
using std::string;

Player::Player(const string& name, double maxHealth, double strength) :
                Character(name, maxHealth, strength)
                {};

int Player::getMaxStat() const {
    return 100;
}

//Berserker
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
    int damage = (1.5 + rage/100.0)*(this->getStrength());
    target.takeDamage(damage);
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

//Rogue
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
    critChance = rand() % 100;
    if (critChance >= 99){
        target.takeDamage(10000);
        luck = BASELUCK;
    }
    else if (luck > critChance) {
        target.takeDamage(3*this->getStrength());
        luck = BASELUCK;
    }
    else {
        target.takeDamage(this->getStrength());
        luck += 10;
    }
}
