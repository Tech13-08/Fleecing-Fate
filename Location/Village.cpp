
#include "Village.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

Village::Village(const string name, const string description, const int sizeScale) : MapManager(name, description, "Village", sizeScale){
    this->populateMap();
}

