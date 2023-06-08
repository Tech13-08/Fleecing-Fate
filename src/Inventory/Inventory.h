#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <vector>
#include "../Items/Item.h"
using namespace std;

class Inventory {
 private:
  vector<Item*> inv;
  int money;
  
 public:
    Inventory();
    void add_item(Item*);
    Item* use_item(int index);
    int get_money() const;
    void set_money(int );
    void add_money(int );
    vector<Item*> get_inventory();
    void displayInventory() const;
    Item* selectItem();

};

#endif