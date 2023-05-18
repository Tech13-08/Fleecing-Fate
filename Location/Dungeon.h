#ifndef __DUNGEON_H__
#define __DUNGEON_H__
#include <string>
#include "TopLocation.h"
#include "DungeonRoom.h"
using std::string;

class Dungeon : public TopLocation{
    public:
        Dungeon(const string name, const string description);

};

#endif // __PERSON_H__
