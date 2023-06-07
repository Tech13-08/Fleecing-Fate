#include "../include/Player.h"
#include <string>
using std::string;

Player::Player(const string& name, double maxHealth, double strength) :
                Character(name, maxHealth, strength)
                {};

int Player::getMaxStat() const {
    return 100;
}
