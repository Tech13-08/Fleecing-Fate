#include "../include/Enemy.h"
#include <string>
using namespace std;

Enemy::Enemy(const string& name, double maxHealth, double strength) :
            Character(name, maxHealth, strength) {};