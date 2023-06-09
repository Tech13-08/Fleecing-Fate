#ifndef __MAPMANAGER_H__
#define __MAPMANAGER_H__

#include <string>
#include "Location.h"
#include "Store.h"
#include "DungeonRoom.h"
#include "BossRoom.h"
#include <vector>

using std::string;
using std::vector;

class MapManager : public Location {
private:
    const int minSize = 3;
    const int maxSize = 5;

protected:
    vector<vector<Location*>> map;
    vector<Location*> places;

public:
    MapManager(const string name, const string description, const string type, const int sizeScale)
        : Location(name, description, type) {
        srand((unsigned)time(0));
        this->setSize(3); // Temporary size value for testing
        map.resize(this->getSize(), vector<Location*>(this->getSize(), nullptr));
    }

    virtual ~MapManager() {
        for (int i = 0; i < places.size(); i++) {
            places.at(i) = nullptr;
        }
        for (int i = 0; i < map.size(); i++) {
            for (int j = 0; j < map[i].size(); j++) {
                if (map[i][j]) {
                    delete map[i][j];
                    map[i][j] = nullptr; // Set the pointer to null after deletion
                }
            }
        }
    }


    Location* getLocation(int row, int col) {
        if (!inRange(row, col)) {
            throw string("Out of bounds");
        }
        Location* loc = this->map.at(row).at(col);
        if (loc) {
            return loc;
        }
        return nullptr;
    }

    bool inRange(int row, int col) {
        return row >= 0 && row < this->getSize() && col >= 0 && col < this->getSize();
    }

    virtual void populateMap() = 0;
};

#endif // __MAPMANAGER_H__
