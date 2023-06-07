#include "gtest/gtest.h"
#include "../header/battle.h"
#include "../header/player.h"
#include "../header/enemy.h"

using namespace std;
TEST(BattleTests,Constructor){
    Player* p = new Player();
    Enemy* e = new Enemy();
    Battle* battle = new Battle(p,e);
    EXPECT_NE(battle,nullptr);
}
TEST(BattleTests, TestCalcDamage){
    Player* p = new Player();
    Enemy* e = new Enemy();
    Battle* battle = new Battle(p,e);
    int dmg = battle->calcDamage(25);
    EXPECT_GE(dmg,20);
    EXPECT_LE(dmg,30);
}
TEST(BattleTests, TestCalcCrit){
    Player* p = new Player();
    Enemy* e = new Enemy();
    Battle* battle = new Battle(p,e);
    int dmg = battle->calcDamageWithCrit(25,100);
    EXPECT_GE(dmg,40);
    EXPECT_LE(dmg,60);
}
TEST(BattleTests, WinCondition){
    Player* p = new Player();
    Enemy* e = new Enemy();
    Battle* battle = new Battle(p,e);
    bool win = battle->doBattle();
    EXPECT_EQ(win,true);
}
TEST(BattleTests, LoseCondition){
    Player* p = new Player();
    Enemy* e = new Enemy();
    Battle* battle = new Battle(p,e);
    bool win = battle->doBattle();
    EXPECT_NE(win,true);
}