
#include "Game.h"
#include <iostream>
#include <string>
using namespace std;

    Game::Game(Character* thatplayer, Location* thatplaces){
      player = thatplayer;
      place = thatplaces;
      Coord[0] = 0;
      Coord[1] = 0;
    }

    bool Game::move(int x, int y){
      if(x && y){
        Coord[0] = x;
        Coord[1] = y;
      }
      return false;
    }

    Character* Game::getPlayer() const{
      return player;
    }

    Location* Game::getLocation() const{
      return place;
    }

    void Game::setLocation(Location* thatplace){
      place = thatplace;
    }

    //bool Game::Battle(Enemy* ) const;

    const int* Game::getCurrPos() const{
      return Coord;
    }

    void Game::setCurrPos(int x, int y){
      Coord[0] = x;
      Coord[1] = y;
    }

    void Game::inventoryAdd(Item thatItem){
      Inventory.push_back(thatItem);
    }
    void Game::inventoryRemove(string thatname){
      for(int i=0; i < Inventory.size(); i++){
        if(Inventory.at(i).getName() == (thatname)){
          Inventory.erase(Inventory.begin(), Inventory.begin()+i);
        }
      }
    }
    Item Game::inventoryGet(string thatname){
      for(int i=0; i < Inventory.size(); i++){
        if(Inventory.at(i).getName() == (thatname)){
          return Inventory.at(i);
        }
      }
    }