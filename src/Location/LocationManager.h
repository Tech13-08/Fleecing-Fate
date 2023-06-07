#ifndef LOCATIONMANAGER_H
#define LOCATIONMANAGER_H
#include <iostream>
#include <string>
#include <vector>
#include "AllLocations.h"
using namespace std;

class LocationManager {
 private:
  vector<MapManager*> maps;
  int currentMap;
  int x;
  int y;
  
 public:
    LocationManager();
    bool move(string);
    Location* getLocation() const;
    void setLocation(int);
    void displayLocation();

};

#endif