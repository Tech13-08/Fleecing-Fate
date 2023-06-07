#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <vector>
#include "../Items/Item.h"
using namespace std;

class Inventory {
 private:
  vector<Items*> inv;
  int money;
  
 public:
    Inventory();
    add_item(Item*);
    Item* use_item(string name);
    int get_money() const;
    void set_money(int );
    void add_money(int );
    vector<Items*> get_inventory();

};

#endif