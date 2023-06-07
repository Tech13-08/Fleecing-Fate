#include "Enemy.h"
#include <string>
using namespace std;

Enemy::Enemy(const string& name, double maxHealth, double strength) :
        Character(name, maxHealth, strength) {};

Enemy::Enemy() : Character("Wolf", 50.0, 5.0) {};