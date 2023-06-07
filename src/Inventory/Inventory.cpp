
#include <vector>
#include <string>
#include "Inventory.h"
#include "../Items/Item.h"
using namespace std;
    
    Inventory::Inventory(){
      money = 100;
    }

    Inventory::add_item(Item* cpy){
      inv.push_back(cpy);
    }

    Item* Inventory::use_item(int index){
      Item cpyitem = new 
      if(index < 0 || index > inv.size() -1){
        return nullptr;
      }
      if(inv.at(index)->getAmount() == 1){
        inv.at(index)->addAmount(-1);
        return new Item(inv.at(index)->name, inv.at(index)->cost, inv.at(index)->Itemtype, inv.at(index)->power);
        inv.erase(inv.begin(), index);
      }else{
        inv.at(index)->addAmount(-1);
        return new Item(inv.at(index)->name, inv.at(index)->cost, inv.at(index)->Itemtype, inv.at(index)->power);
      }
    }

    int Inventory::get_money() const{
      return money;
    }

    void Inventory::set_money(int newmoney){
      money = newmoney;
    }

    void Inventory::add_money(int moremoney){
      money = money + moremoney;
    }

    vector<Item*> Inventory::get_inventory(){
      return inv;
    }