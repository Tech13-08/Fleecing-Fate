#include "Player.h"
#include <string>
using std::string;

Player::Player(const string& name, int maxHealth, int strength) :
                Character(name, maxHealth, strength){};

int Player::getMaxStat() const {
    return 100;
}

string Player::getStatType() const {
    return statType;
}

string Player::getDescription() const {
    return description;
}

string Player::getPlayerType() const {
    return playerType;
}

void Player::setStatType(const string& sType) {
    statType = sType;
}

void Player::setDescription(const string& desc) {
    description = desc;
}

void Player::setPlayerType(const string& pType) {
    playerType = pType;
}

string Player::rest() {
    heal(1000);
    reset();
    return getName() + " falls asleep counting sheep...\nYou wake up with full health";
}
