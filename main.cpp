#include <iostream>
#include <stdlib.h>
#include <string>
#include "header/battle.h"
#include "header/player.h"
#include "header/enemy.h"
using namespace std;

int main(){
    Player* p = new Player();
    Enemy* e = new Enemy();
    Battle* b = new Battle(p,e);
    b->doBattle();
    return 0;
}