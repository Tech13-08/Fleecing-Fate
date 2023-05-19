#ifndef PLAYER_H
#define PLAYER_H
#include "Character.h"

class Player : public Character {
private:
    double exp;
    int level;
public:
    // setters and getters
    double getExp() const;
    int getLevel() const;
    void gainExp(double expGained);
    void levelUp();
    // combat
    void block();
}

#endif