#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include <vector>
#include "Character.h"
#include "Location.h"
#include "Item.h"
#include "Enemy.h"
using namespace std;

class LocationManager {
 private:
  int currentmap;
  MapManager* map;
  int x;
  int y;
  
 public:
    LocationManager();
    bool move(int thisx, int thisy);
    Location* getLocation() const;
    void teleport(int thisx, int thisy)
    void setLocation(Location*);
    const int* getCurrPos() const;
    void setCurrPos(int , int);

};

#endif