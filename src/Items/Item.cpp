#include <iostream>
#include <string>
#include <stdexcept>
#include "Item.h"

using namespace std;

Item::Item(){
    name = "NoName";
    cost = 0;
    thattype = "NoType";
    thatpower = 0;
    amount = 0;
}

Item::Item(string thatname, int thatcost, string thattype, int thatpower){
    name = thatname;
    cost = thatcost;
    Itemtype = thattype;
    power = thatpower;
    amount = 0;
}

Item& Item::operator=(const Item& cpy){
    return new Item(cpy->name, cpy->cost, cpy->Itemtype, cpy->power);
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