#ifndef LOCATIONMOVE_H
#define LOCATIONMOVE_H
#include <iostream>
#include <string>
#include "LocationManager.h"
#include "../Character/AllCharacters.h"
#include "../Inventory/Inventory.h"
using namespace std;

class LocationMove {
    private:
        Player* p;
        Inventory* inv;
        LocationManager* lm;
 public:
    LocationMove(Player*, Inventory*, LocationManager*);
    void moveMenu();
    bool locationEvent();

};

#endif