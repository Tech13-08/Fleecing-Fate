#include "Character.h"
#include <string>
using std::string;

Character::Character(const string& name, int maxHealth, int strength) : 
                    name(name), maxHealth(maxHealth), strength(strength) {
    currHealth = maxHealth;
    isAlive = true;
}

string Character::getName() const {
    return name;
}

int Character::getMaxHealth() const {
    return maxHealth;
}

int Character::getCurrHealth() const {
    return currHealth;
}

int Character::getStrength() const {
    return strength;
}

bool Character::getAlive() const {
    return isAlive;
}

void Character::takeDamage(int damageTaken) {
    currHealth -= damageTaken;
    if (currHealth <= 0){
        currHealth = 0;
        die();
    }
}

int Character::dealDamage(Character* target, int initialDamage) {
    int damageDealt = (int)(getVariance(initialDamage));
    if (damageDealt <= 1) {
        target->takeDamage(1);
        return 1;
    } // minimum damage done is 1
    target->takeDamage(damageDealt);
    return damageDealt;
}

int Character::getVariance(int initialDamage) {
    //can deal -20% to +20% damage
    int variance = (rand()%40 - 20)/100;
    return initialDamage*(1 + variance); 
}

void Character::heal(int healed) {
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