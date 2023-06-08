#include "Player.h"
#include <string>
using std::string;

Player::Player(const string& name, double maxHealth, double strength) :
                Character(name, maxHealth, strength)
                {};

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