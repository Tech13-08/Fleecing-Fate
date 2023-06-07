#include <iostream>

#include <vector>
#include <string>
#include "Inventory.h"
#include "../Items/Item.h"
using namespace std;
    
    Inventory::Inventory(){
      money = 100;
    }

    void Inventory::add_item(Item* cpy){
      for(int i = 0; i < inv.size(); i++){
        if(cpy->getName() == inv.at(i)->getName()){
          inv.at(i)->addAmount(1);
          return;
        }
      }
      Item* cpyitem = cpy;
      cpyitem->addAmount(1);
      inv.push_back(cpyitem);
    }

    Item* Inventory::use_item(int index){
        
      if(index < 0 || index > inv.size() -1){
        return nullptr;
      }
      if(inv.at(index)->getAmount() == 1){
        inv.at(index)->addAmount(-1);
        return new Item(inv.at(index)->getName(), inv.at(index)->getCost(), inv.at(index)->getType(), inv.at(index)->getPower());
        inv.erase(inv.begin(), index);
      }else{
        inv.at(index)->addAmount(-1);
        return new Item(inv.at(index)->getName(), inv.at(index)->getCost(), inv.at(index)->getType(), inv.at(index)->getPower());
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

    void Inventory::displayInventory() const{
      cout "Inventory: ";
      for(int i = 0; i < inv.size()-1; i++){
        cout << inv.at(i)->getName();
        cout << ", "
      }
      cout << inv.at(inv.size()-1)->getName();
    }