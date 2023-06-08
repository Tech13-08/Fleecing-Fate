#ifndef __DUNGEONROOM_H__
#define __DUNGEONROOM_H__

#include "../Character/AllCharacters.h"
#include "../Inventory/Inventory.h"
#include <string>
#include "Location.h"
#include <vector>
using std::string;
using std::vector;

class DungeonRoom : public Location{
    private:
        vector<Enemy*> enemies;
    public:
        DungeonRoom(const string name, const string description);

        void battleEnemies(Player*, Inventory*);

};

#endif // __PERSON_H__
