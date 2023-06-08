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
    int dealDamage(Character*, double);
    virtual void takeDamage(double);
    double getVariance(double);
    void heal(double);
    void die();
    // combat
    virtual int attack(Character* target);
};

#endif