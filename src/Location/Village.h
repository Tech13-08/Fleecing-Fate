#ifndef __VILLAGE_H__
#define __VILLAGE_H__
#include <string>
#include "MapManager.h"
using std::string;

class Village : public MapManager{
    public:
        Village(const string name, const string description, const int sizeScale);
        void populateMap() override;

};

#endif // __PERSON_H__
