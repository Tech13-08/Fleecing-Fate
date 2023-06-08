#include <iostream>
#include <string>
#include <stdexcept>
#include "Item.h"

using namespace std;

Item::Item(){
    name = "NoName";
    cost = 0;
    Itemtype = "NoType";
    power = 0;
    amount = 0;
}

Item::Item(string thatname, int thatcost, string thattype, int thatpower){
    name = thatname;
    cost = thatcost;
    Itemtype = thattype;
    power = thatpower;
    amount = 0;
}

const Item& Item::operator=(const Item& cpy){
    return *new Item(cpy.getName(), cpy.getCost(), cpy.getType(), cpy.getPower());
}

string Item::getName() const{
    return name;
}
string Item::getType() const{
    return Itemtype;
}
int Item::getCost() const{
    return cost;
}

int Item::getPower() const{
    return power;
}

int Item::getAmount() const{
    return amount;
}

void Item::addAmount(int input){
    amount = amount + input;
}

void Item::displayItem() const{
    cout << "Name: " + getName() + " Cost: " + getCost() + " Type: " + getType() + " Effect: " + getPower() << endl;
}