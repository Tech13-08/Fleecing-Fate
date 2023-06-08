#ifndef MAKESELECTOR_H
#define MOVESELECTOR_H
#include <iostream>
#include <string>
#include "LocationManager.h"
#include "MoveSelector.h"
#include "../Character/AllCharacters.h"
#include "../Inventory/Inventory.h"
using namespace std;

class MoveSelector {
 private:
  LocationManager* lm;
  
 public:
    MoveSelector();
    void moveMenu();
    void locationEvent(Player*, Inventory*);

};

#endif