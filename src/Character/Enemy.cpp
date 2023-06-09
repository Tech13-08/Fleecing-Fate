#include "Enemy.h"
#include <string>
using namespace std;

Enemy::Enemy(const string& name, int maxHealth, int strength) :
        Character(name, maxHealth, strength) {};

Enemy::Enemy() : Character("Wolf", 80, 8) {};