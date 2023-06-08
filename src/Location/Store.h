#ifndef __STORE_H__
#define __STORE_H__

#include "../Items/Item.h"
#include <string>
#include "Location.h"
#include <vector>
using std::string;
using std::vector;

class Store : public Location{
    private:
        vector<Item*> items;
    public:
        Store(const string name, const string description);

        const vector<Item*> getItems();
        Item* buyItem(int index, int& money);
        void storeMenu();

};

#endif // __PERSON_H__
