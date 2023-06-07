#ifndef __DUNGEONROOM_H__
#define __DUNGEONROOM_H__

#include "../Characters/Enemy.h"
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

        const vector<Enemy*> getEnemies();

};

#endif // __PERSON_H__
