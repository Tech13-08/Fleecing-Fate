#include "Character.h"
#include <string>

using std::string;

Character::Character(string& name, double maxHealth, double strength) : 
                    name(name), maxHealth(maxHealth), strength(strength) {
    currHealth = maxHealth;
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

void Character::takeDamage(double damage) {
    currHealth -= damage;
    if (currHealth < 0)
        currHealth = 0;
}

void Character::heal(double healed) {
    currHealth += healed;
    if (currHealth > maxHealth)
        currHealth = maxHealth;
}

void Character::attack(Character* target) {
    target->takeDamage(strength);
}

//Player class

Player::Player(string& name, double maxHealth, double strength) :
                Character(name, maxHealth, strength)
                {};

// double Player::calcMaxExp() const {
//     if (level < 10)
//         return 20.0*level;
//     return -1;                  // max level is 10
// }

// double Player::getExp() const {
//     return exp;
// }

// int Player::getLevel() const {
//     return level;
// }

// void Player::gainExp(double expGained) {
//     exp += expGained;
//     if (exp >= calcMaxExp())
//         levelUp();
// }

// void Player::levelUp() {
//     if (level < 10)
//         level++;
//     // FIX: OTHERWISE SHOULD TELL PLAYER THEY ARE MAX LEVEL
// }

// bool Player::getBlock() const {
//     return isBlocking;
// }

// void Player::setBlock(bool block) {
//     isBlocking = block;
// }

void Player::specialAttack(Character* target) {
    int coinFlip = rand()%2;
    if (coinFlip == 1)
        target->takeDamage(3.0*strength);
    else
        target->takeDamage(1.5*strength);
}