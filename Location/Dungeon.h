#ifndef __DUNGEON_H__
#define __DUNGEON_H__
#include <string>
#include "MapManager.h"
using std::string;

class Dungeon : public MapManager{
    public:
        Dungeon(const string name, const string description, const int sizeScale);

};

#endif // __PERSON_H__
