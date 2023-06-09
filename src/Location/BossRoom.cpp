
#include "BossRoom.h"
#include "../Character/AllCharacters.h"
#include "../Inventory/Inventory.h"
#include "../Battle/Battle.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
BossRoom::BossRoom(const string name, const string description) : Location(name, description, "BossRoom"){
    srand((unsigned)time(0)); 
    this->setSize(20);
    for (int i = 0; i < getSize(); ++i){
        enemies.push_back(new Enemy("Wolf Infant", 1.0, 0.0));
    }
}

BossRoom::~BossRoom(){
    for(int i = 0; i < enemies.size(); i++){
        
        delete enemies.at(i);
    }
}

void BossRoom::battleEnemies(Player* p, Inventory* inv){
    if(isDefeated()){
        cout << "You have finally defeated all the wolves!" << endl;
        return;
    }
    displayLocation();
    Battle* battle = nullptr;
    for(int i = 0; i < getSize(); ++i){
         battle = new Battle(p, enemies[i], inv);
        cout << "A wild " << enemies[i]->getName() << " has appeared... (" << (i+1) << " out of " << getSize() <<" infants)" << endl;
        if(!battle->doBattle()){
            delete battle;
            return;
        }
        cout << "------------------------------------------------------------------------" << endl;
        int deathmsg = (rand()%3);
        if(deathmsg == 0){
            cout << "The little wolf crumples like paper at the might of your attack." << endl;
        }
        if(deathmsg == 1){
            cout << "The infant flys across the room before splattering on the wall." << endl;
        }
        if(deathmsg == 2){
            cout << "The wolf lets out a soft whimper that fades away into the darkness." << endl;
        }
        cout << "------------------------------------------------------------------------" << endl;
        delete battle;
       
    }
    defeated = true;
    int reward = 1000;
    cout << "Congrats! You massacred the infants! Your reward is " << reward << " coins!" << endl;
    inv->add_money(reward);
}

bool BossRoom::isDefeated(){
    return defeated;
}