#include "../header/player.h"

Player::Player(){
    int hp = 100;
    int atk = 25;
}

int Player::getHP(){
    return this->hp;
}

int Player::getATK(){
    return this->atk;
}

void Player::takeDamage(int dmg){
    this->hp-=dmg;
}