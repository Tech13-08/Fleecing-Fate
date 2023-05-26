#include <iostream>
#include <string>
#include <stdexcept>
#include "Item.h"

using namespace std;

Item::Item(){
    name = "NoName";
    cost = 0;
    Itemtype = "NoType";
}

Item::Item(string thatname, int thatcost, string thattype){
    name = thatname;
    cost = thatcost;
    Itemtype = thattype;
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