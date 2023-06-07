
#include "Store.h"
#include "../Item.h"
#include <string>
#include <vector>
using std::string;
using std::vector;
Store::Store(const string name, const string description) : Location(name, description, "Store"){
    this->setSize(4);
    items.resize(this->getSize(), nullptr);
    items.push_back(new Item("Potion of Not Dying", 40, "heal", 50));
    items.push_back(new Item("boom", 100, "attack", 1000));
    items.push_back(new Item("small boom", 15, "attack", 20));
    items.push_back(new Item("Bandaid", 10, "heal", 8));
}

const vector<Item*> Store::getItems(){
    return this->items;
}
Item* Store::buyItem(int index, int& money){
    if(index < this->getSize()){
        Item* item = this->items[index];
        if(item && money >= item->getCost()){
            money -= item->getCost();
            return item;
        }
    }
    return nullptr;
}

