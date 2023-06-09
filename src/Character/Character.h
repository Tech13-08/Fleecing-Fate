#include <string>
using std::string;

#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
private:
    string name;
    int maxHealth;
    int currHealth;
    int strength;
    bool isAlive;
public:
    Character(const string&, int, int);
    // setters and getters
    string getName() const;
    int getMaxHealth() const;
    int getCurrHealth() const;
    int getStrength() const;
    bool getAlive() const;
    int dealDamage(Character*, int);
    virtual void takeDamage(int);
    int getVariance(int);
    void heal(int);
    void die();
    // combat
    virtual int attack(Character* target);
};

#endif