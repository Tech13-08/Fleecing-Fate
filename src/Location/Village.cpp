
#include "Village.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

Village::Village(const string name, const string description, const int sizeScale) : MapManager(name, description, "Village", sizeScale){
    this->populateMap();
    
}


void Village::populateMap(){
            srand((unsigned)time(0)); 
            int i = 0;
            int j = 0;
            for(int n = 0; n < this->getSize()/2 + 1; ++n){
                i = rand()%(this->getSize()-1);
                j = rand()%(this->getSize()-1);
                while(map[i][j]){
                    i = rand()%(this->getSize()-1);
                    j = rand()%(this->getSize()-1);
                }
                map[i][j] = new Store("Store " + std::to_string(n+1), "It's literally just a store mate");
                
                places.push_back(map[i][j]);
            }

        }