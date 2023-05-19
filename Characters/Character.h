#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
using std::string;

class Character {
private:
    double maxHealth;
    double currHealth;
    double attack;
    string name;
public:
    Character(string&, double, double, double);
    // setters and getters
    double getMaxHealth() const;
    double getCurrHealth() const;
    string getName();
    void takeDamage(double damage);
    void heal(double healed);
    // combat
    void attack();
    void special();
};

#endif