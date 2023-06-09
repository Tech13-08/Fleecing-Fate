#ifndef __BOSSROOM_H__
#define __BOSSROOM_H__

#include "../Character/AllCharacters.h"
#include "../Inventory/Inventory.h"
#include <string>
#include "Location.h"
#include <vector>
using std::string;
using std::vector;

class BossRoom : public Location{
    private:
        vector<Enemy*> enemies;
        bool defeated = false;
    public:
        BossRoom(const string name, const string description);

        void battleEnemies(Player*, Inventory*);

        bool isDefeated();

};

#endif // __PERSON_H__
