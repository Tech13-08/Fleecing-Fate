#ifndef __TOPLOCATION_H__
#define __TOPLOCATION_H__
#include <string>
#include "Location.h"
#include <vector>
using std::string;
using std::vector;

class TopLocation : public Location{
    protected:
        vector<vector<Location*>> map;

    public:
        TopLocation(const string name, const string description, const string type, const int size) : Location(name, description, type, size){
            map.resize(this->getSize(), vector<Location*>(this->getSize(), nullptr));
        }

        const Location* getLocation(int* pos){
            const Location* loc = this->map.at(pos[0]).at(pos[1]);
            if(loc){return loc;}
            return nullptr;
        }

};

#endif // __PERSON_H__
