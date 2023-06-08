#include "gtest/gtest.h"
#include "../src/Character/AllCharacters.h"
#include "../src/Inventory/Inventory.h"
#include "../src/Battle/Battle.h"
using namespace std;
TEST(BattleTests,Constructor){
    Berserker* p1 = new Berserker("Player One", 100, 25);
    Enemy* e1 = new Enemy();
    Inventory* inv1 = new Inventory();
    Battle* battle = new Battle(p1, e1, inv1);
    EXPECT_NE(battle,nullptr);
}
// TEST(BattleTests, TestCalcDamage){
//     Berserker* p1 = new Berserker("Player One", 100, 25);
//     Enemy* e = new Enemy();
//     Battle* battle = new Battle(p1,e);
//     int dmg = battle->calcDamage(25);
//     EXPECT_GE(dmg,20);
//     EXPECT_LE(dmg,30);
// }
// TEST(BattleTests, TestCalcCrit){
//     Berserker* p1 = new Berserker("Player One", 100, 25);
//     Enemy* e = new Enemy();
//     Battle* battle = new Battle(p1,e);
//     int dmg = battle->calcDamageWithCrit(25,100);
//     EXPECT_GE(dmg,40);
//     EXPECT_LE(dmg,60);
// }
TEST(BattleTests, WinCondition){
    Berserker* p1 = new Berserker("Player One", 100, 25);
    Enemy* e = new Enemy();
    Inventory* inv1 = new Inventory();
    Battle* battle = new Battle(p1,e, inv1);
    bool win = battle->doBattle();
    EXPECT_EQ(win,true);
}
TEST(BattleTests, LoseCondition){
    Berserker* p1 = new Berserker("Player One", 100, 25);
    Enemy* e = new Enemy();
    Inventory* inv1 = new Inventory();
    Battle* battle = new Battle(p1,e, inv1);
    bool win = battle->doBattle();
    EXPECT_NE(win,true);
}