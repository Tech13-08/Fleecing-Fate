#include "Character.h"
#include <string>
using std::string;

Character::Character(const string& name, double maxHealth, double strength) : 
                    name(name), maxHealth(maxHealth), strength(strength) {
    currHealth = maxHealth;
    isAlive = true;
}

string Character::getName() const {
    return name;
}

double Character::getMaxHealth() const {
    return maxHealth;
}

double Character::getCurrHealth() const {
    return currHealth;
}

double Character::getStrength() const {
    return strength;
}

bool Character::getAlive() const {
    return isAlive;
}

void Character::takeDamage(double damageTaken) {
    currHealth -= damageTaken;
    if (currHealth <= 0){
        currHealth = 0;
        die();
    }
}

int Character::dealDamage(Character* target, double initialDamage) {
    int damageDealt = (int)(getVariance(initialDamage));
    if (damageDealt <= 1) {
        target->takeDamage(1);
        return 1;
    } // minimum damage done is 1
    target->takeDamage(damageDealt);
    return damageDealt;
}

double Character::getVariance(double initialDamage) {
    //can deal -20% to +20% damage
    double variance = (rand()%40 - 20)/100.0;
    return initialDamage*(1 + variance); 
}

void Character::heal(double healed) {
    currHealth += healed;
    if (currHealth > maxHealth)
        currHealth = maxHealth;
}

int Character::attack(Character* target) {
    return dealDamage(target, strength);
}

void Character::die() {
    isAlive = false;
}