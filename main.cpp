#include <iostream>
#include <stdlib.h>
#include <string>
#include "header/battle.h"
using namespace std;

int main(){
    Battle* b = new Battle();
    b->doBattle();
    return 0;
}