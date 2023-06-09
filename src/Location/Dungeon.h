#ifndef __DUNGEON_H__
#define __DUNGEON_H__
#include <string>
#include "MapManager.h"
using std::string;

class Dungeon : public MapManager{
    private:
    
    public:
        Dungeon(const string name, const string description, const int sizeScale);
        bool isCompleted();
        void populateMap() override;

};

#endif // __PERSON_H__
