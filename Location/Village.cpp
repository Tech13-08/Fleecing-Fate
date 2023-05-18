
#include "Village.h"
#include "Store.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

Village::Village(const string name, const string description) : TopLocation(name, description, "Village", 3){
    for (int i = 0; i < this->getSize(); ++i) {
        for (int j = 0; j < this->getSize(); ++j) {
            if (j % 2 == 0){
                map[i][j] = new Store("Store A", "The first store ever");
            }
        }
    }
}

