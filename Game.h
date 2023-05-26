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

class Game {
 private:

  Character* player;
  Location* place;
  int Coord[2];
  vector<Item> Inventory;
  
 public:
    Game(Character* , Location* );
    bool move(int x, int y);
    Character* getPlayer() const;
    Location* getLocation() const;
    void setLocation(Location*);
    bool Battle(Enemy* ) const;
    const int* getCurrPos() const;
    void setCurrPos(int , int);
    void inventoryAdd(Item );
    void inventoryRemove(string );
    Item inventoryGet(string );





};

#endif