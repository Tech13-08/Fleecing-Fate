#ifndef __ITEM_H__
#define __ITEM_H__

#include <string>
using std::string;
class Item{
    private:
        string name;
        int cost;
        string type;
        int power;
    public:
        Item(string name, int cost, string type, int power) : name(name), cost(cost), type(type), power(power) {}
        int getCost(){return this->cost;}

};

#endif // __PERSON_H__
