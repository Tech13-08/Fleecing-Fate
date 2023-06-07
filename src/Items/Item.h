#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;
//Item2
class Item {
 private:
    string name;
    int cost;
    string Itemtype;
    int power;
    int amount;

  
 public:
    Item();
    Item(string, int, string, int); 
    Item & operator=(const Item &cpy);
    string getName() const;
    string getType() const;
    int getCost() const;
    int getPower() const;
    int getAmount() const;
    void addAmount(int ) const;
};

#endif