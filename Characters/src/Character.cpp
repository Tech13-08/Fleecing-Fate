#include "../include/Character.h"
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

void Character::takeDamage(double damage) {
    currHealth -= damage;
    if (currHealth <= 0){
        currHealth = 0;
        die();
    }
}

void Character::dealDamage(Character* target, double damage) {
    target->takeDamage(damage);
}

void Character::heal(double healed) {
    currHealth += healed;
    if (currHealth > maxHealth)
        currHealth = maxHealth;
}

void Character::attack(Character* target) {
    dealDamage(target, strength);
}

void Character::die() {
    isAlive = false;
}