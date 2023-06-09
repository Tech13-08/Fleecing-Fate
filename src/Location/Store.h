#ifndef __STORE_H__
#define __STORE_H__

#include "../Items/Item.h"
#include <string>
#include "Location.h"
#include "../Inventory/Inventory.h"
#include <vector>
using std::string;
using std::vector;

class Store : public Location{
    private:
        vector<Item*> items;
    public:
        Store(const string name, const string description);
        ~Store();
        const vector<Item*> getItems();
        Item* buyItem(int, Inventory* );
        void storeMenu(Inventory*);

};

#endif // __PERSON_H__
