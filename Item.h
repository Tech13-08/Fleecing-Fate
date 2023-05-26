#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Item {
 private:
    string name;
    int cost;
    string Itemtype;
  
 public:
    Item();
    Item(string, int, string);  
    string getName() const;
    string getType() const;
    int getCost() const;
};

#endif