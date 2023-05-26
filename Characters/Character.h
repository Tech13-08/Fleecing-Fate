#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
using std::string;

class Character {
private:
    string name;
    double maxHealth;
    double currHealth;
    double strength;
public:
    Character(string&, double, double);
    // setters and getters
    string getName();
    double getMaxHealth() const;
    double getCurrHealth() const;
    double getStrength() const;
    void takeDamage(double damage);
    void heal(double healed);
    // combat
    void attack(Character* target);
};

class Player : public Character {
private:
    // double maxExp;
    // double exp;
    // int level;
    // bool isBlocking;
    // int maxAp;
    // int ap;
public:
    Player(string&, double, double, int);
    // setters and getters
    // double calcMaxExp() const;
    // double getExp() const;
    // int getLevel() const;
    // void gainExp(double expGained);
    // void levelUp();
    // bool getBlock() const;
    // void setBlock(bool block);
    // combat 
    void specialAttack(Character* target);
};

class Enemy : public Character {
private:
    int challenge;
};

#endif