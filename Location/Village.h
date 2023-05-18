#ifndef __VILLAGE_H__
#define __VILLAGE_H__
#include <string>
#include "TopLocation.h"
#include "Store.h"
using std::string;

class Village : public TopLocation{
    public:
        Village(const string name, const string description);

};

#endif // __PERSON_H__
