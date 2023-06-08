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
      if(index < 0 || index > inv.size() - 1){
        return nullptr;
      }
      if(inv.at(index)->getAmount() == 1){
        inv.at(index)->addAmount(-1);
        Item* tempitem = new Item(inv.at(index)->getName(), inv.at(index)->getCost(), inv.at(index)->getType(), inv.at(index)->getPower());
        inv.erase(inv.begin() + index);
        return tempitem;
      }else{
        inv.at(index)->addAmount(-1);
        Item* tempitem = new Item(inv.at(index)->getName(), inv.at(index)->getCost(), inv.at(index)->getType(), inv.at(index)->getPower());
        return tempitem;
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
      cout << "Money: ";
      cout << money;
      cout << endl;
      cout << "Inventory: ";
      if(inv.size() == 0){
        cout << "Empty..." << endl;
        return;
      }
      cout << endl;
      for(int i = 0; i < inv.size(); i++){
        cout << i + 1;
        cout << ". ";
        cout << inv.at(i)->getName();
        cout << " (";
        cout << inv.at(i)->getAmount();
        cout << ")" << endl;
      }
      /*
      cout << inv.size();
      cout << ". ";
      cout << inv.at(inv.size()-1)->getName();*/
      
      
    }

    Item* Inventory::selectItem(){
        int choice = 0;
        cout << "What item do you want to use?" << endl;
        displayInventory();
        cin >> choice;
        choice = choice - 1;
        if (inv.empty() || choice < 0 || choice >= inv.size()) {
          cout << "Selected out of bounds, cancelling use item." << endl;
          return nullptr;
        }
        cout << "Selected ";
        cout << inv.at(choice)->getName();
        cout << endl;
        return use_item(choice);
    }