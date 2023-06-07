#include "gtest/gtest.h"
#include "../src/Character/AllCharacters.h"
#include "../src/Battle/Battle.h"
using namespace std;
TEST(BattleTests,Constructor){
    Berserker* p1 = new Berserker("Player One", 1000, 200);
    Enemy* e1 = new Enemy();
    Battle* battle = new Battle(p1, e1);
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