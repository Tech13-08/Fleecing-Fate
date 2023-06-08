#ifndef LOCATIONMANAGER_H
#define LOCATIONMANAGER_H
#include <iostream>
#include <string>
#include <vector>
#include "AllLocations.h"
using namespace std;

class LocationManager {
 public:
  vector<MapManager*> maps;
  int currentMap;
  int x;
  int y;
  
 public:
    LocationManager();
    bool move(int);
    Location* getLocation() const;
    void setLocation(int);
    void displayArea();
    void printMap();

};

#endif