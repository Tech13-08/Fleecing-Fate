#include "../header/enemy.h"

Enemy::Enemy(){
    int hp = 100;
    int atk = 15;
}

int Enemy::getHP(){
    return this->hp;
}

int Enemy::getATK(){
    return this->atk;
}

void Enemy::takeDamage(int dmg){
    this->hp-=dmg;
}