#ifndef MAKESELECTOR_H
#define MOVESELECTOR_H
#include <iostream>
#include <string>
#include "LocationManager.h"
using namespace std;

class MoveSelector {
 private:
  LocationManager* lm;
  
 public:
    MoveSelector();
    void moveMenu();
    void locationEvent();

};

#endif