#ifndef MAKESELECTOR_H
#define MOVESELECTOR_H
#include <iostream>
#include <string>
#include "LocationManager.h"
#include "../Character/AllCharacters.h"
using namespace std;

class MoveSelector {
 private:
  LocationManager* lm;
  
 public:
    MoveSelector();
    void moveMenu();
    void locationEvent(Player* p);

};

#endif