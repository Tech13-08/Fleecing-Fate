#ifndef __BOSSLAIR_H__
#define __BOSSLAIR_H__
#include <string>
#include "MapManager.h"
using std::string;

class BossLair : public MapManager{
    public:
        BossLair(const string name, const string description, const int sizeScale);
        bool isCompleted();
        void populateMap() override;

};

#endif // __PERSON_H__
