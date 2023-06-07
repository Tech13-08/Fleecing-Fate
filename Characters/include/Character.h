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
    void dealDamage(Character* target, double damage);
    virtual void takeDamage(double damage);
    void heal(double healed);
    void die();
    // combat
    virtual void attack(Character* target);
};
#endif