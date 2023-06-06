#include <string>
using std::string;

#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
private:
    string name;
    double maxHealth;
    double currHealth;
    double strength;
    bool isAlive;
public:
    Character(const string&, double, double);
    // setters and getters
    string getName() const;
    double getMaxHealth() const;
    double getCurrHealth() const;
    double getStrength() const;
    bool getAlive() const;
    void takeDamage(double damage);
    void heal(double healed);
    void die();
    // combat
    void attack(Character* target);
};

class Enemy : public Character {
public:
    Enemy(const string&, double, double);
};

#endif