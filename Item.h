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
    int power;
    int amount;

  
 public:
    Item();
    Item(string, int, string); 
    Item & operator=(const Item &cpy);
    string getName() const;
    string getType() const;
    int getCost() const;
    int getPower() const;
    int getAmount() const;
    void addAmount() const;
};

#endif