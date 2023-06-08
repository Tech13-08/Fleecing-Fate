#include "Rogue.h"
#include <string>
using namespace std;

Rogue::Rogue(const string& name, double maxHealth, double strength) :
                Player(name, maxHealth, strength){
    setStatType("LUCK");
    setDescription("A gambler gone rogue after losing all of their savings on gamba.\nAttacks have a chance to crit. Failing this chance increases the crit chance of the next attack.");
    setPlayerType("Rogue");
};

int Rogue::getStat() const {
    return luck;
}

void Rogue::setStat(int newLuck) {
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

string Rogue::getInfo(){
    return "Your HP: " + to_string((int)getCurrHealth()) + "\n" + "Your Luck: " + to_string((int)getStat()) + "\n";
}