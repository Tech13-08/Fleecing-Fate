
#include "Store.h"
#include "../Items/Item.h"
#include "../Inventory/Inventory.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
Store::Store(const string name, const string description) : Location(name, description, "Store"){
    this->setSize(4);
    items.push_back(new Item("Potion of Not Dying", 40, "heal", 50));
    items.push_back(new Item("boom", 100, "attack", 1000));
    items.push_back(new Item("small boom", 15, "attack", 20));
    items.push_back(new Item("Bandaid", 10, "heal", 8));
}

Store::~Store(){
    for(int i = 0; i < items.size(); ++i){
        delete items.at(i);
        items.at(i) = nullptr;
    }
}

Item* Store::buyItem(int index, Inventory* inv){
    if(index < this->getSize() && index >= 0){
        Item* item = this->items[index];
        if(item && inv->get_money() >= item->getCost()){
            inv->add_money(-1 * item->getCost());
            return item;
        }
        else{
            cout << "You don't have enough money. Come back when you have more" << endl;
            return nullptr;
        }
    }
    cout << "That is not a valid item, try again or leave" << endl;
    return nullptr;
}

void Store::storeMenu(Inventory* inv){
    displayLocation();
    int choice = 0;
    cout << endl;
    cout << "Enter 0 to leave" << endl;
    cout << "Which item would you like?" << endl;
    for(int i = 0; i < getSize(); ++i){
        cout << i + 1 << ". ";
        items.at(i)->displayItem();
    }
    cin >> choice;
    if(!cin){
        cout << "That is not an option. Try a number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return storeMenu(inv);
    }
    if(choice == 0){
        return;
    }
    Item* i = buyItem(choice-1, inv);
    if(i){
        inv->add_item(i);
        cout << "You have bought " << i->getName() << " and now have " << inv->get_money() << " coins!" << endl;
    }
    return storeMenu(inv);
}

