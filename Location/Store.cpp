
#include "Store.h"
#include "../Item.h"
#include <string>
#include <vector>
using std::string;
using std::vector;
Store::Store(const string name, const string description) : Location(name, description, "Store"){
    this->setSize(3);
    items.resize(this->getSize(), nullptr);
    for (int i = 0; i < this->getSize(); ++i) {
        items[i] = new Item(i);
    }
}

const vector<Item*> Store::getItems(){
    return this->items;
}
Item* Store::buyItem(int index){
    if(index < this->getSize()){
        Item* item = this->items[index];
        if(item && item->getItem() > 0){
            return item;
        }
    }
    return nullptr;
}

