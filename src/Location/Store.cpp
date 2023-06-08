
#include "Store.h"
#include "../Items/Item.h"
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using namespace std;
Store::Store(const string name, const string description) : Location(name, description, "Store"){
    this->setSize(4);
    items.push_back(new Item("Potion of Not Dying", 40, "heal", 50));
    items.push_back(new Item("boom", 100, "attack", 1000));
    items.push_back(new Item("small boom", 15, "attack", 20));
    items.push_back(new Item("Bandaid", 10, "heal", 8));
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

void Store::storeMenu(){
    displayLocation();
    int choice = 0;
    cout << "Which item would you like?" << endl;
    for(int i = 0; i < getSize(); ++i){
        cout << i + 1 << ". ";
        items.at(i)->displayItem();
    }
    cin >> choice;    
    int money = 100;
    Item* i = buyItem(choice-1, money);
    if(i){
        cout << "You have bought " << i->getName() << " and now have " << money << " coins!" << endl;
    }else{
        cout << "That is not a valid item, try again or leave" << endl;
    }
}

