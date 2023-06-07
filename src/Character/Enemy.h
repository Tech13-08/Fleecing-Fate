#include "Character.h"
#include <string>
using namespace std;

#ifndef ENEMY_H
#define ENEMY_H

class Enemy : public Character {
public:
    Enemy(const string&, double, double);
    Enemy();
};

#endif