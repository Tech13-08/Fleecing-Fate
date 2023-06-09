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
  MapManager* BossLocation;
  int currentMap;
  int x;
  int y;
  
 public:
    LocationManager();
    ~LocationManager();
    bool move(int);
    Location* getLocation() const;
    void setLocation(int);
    void displayArea();
    void printMap();
    int getX();
    int getY();
    int getSize();
    bool complete();
    void completeHandler();
    bool bossBeat();
};

#endif