
#include "Dungeon.h"
#include "DungeonRoom.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

Dungeon::Dungeon(const string name, const string description) : TopLocation(name, description, "Dungeon", 3){
    for (int i = 0; i < this->getSize(); ++i) {
        for (int j = 0; j < this->getSize(); ++j) {
            if (j % 2 == 0){
                map[i][j] = new DungeonRoom("DungeonRoom A", "The first dungeon room ever");
            }
        }
    }
}

