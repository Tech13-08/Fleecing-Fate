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
<<<<<<<< HEAD:Characters/include/Character.h
    virtual void attack(Character* target);
};
========
    void attack(Character* target);
};

// class Enemy : public Character {
// public:
//     Enemy(const string&, double, double);
// };
>>>>>>>> 882d91d6d5eb50afef84ec2c4aa01f59e4d94e36:src/Characters/Character.h

#endif