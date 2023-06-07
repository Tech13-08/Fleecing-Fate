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
// TEST(BattleTests, TestCalcDamage){
//   Battle* battle = new Battle();
//   int dmg = battle->calcDamage(25);
//   EXPECT_GE(dmg,20);
//   EXPECT_LE(dmg,30);
// }
// TEST(BattleTests, TestCalcCrit){
//     Battle* battle = new Battle();
//     int dmg = battle->calcDamageWithCrit(25,100);
//     EXPECT_GE(dmg,40);
//     EXPECT_LE(dmg,60);
// }
// TEST(BattleTests, WinCondition){
//     Battle* battle = new Battle();
//     battle->enemyTakeDamage(100);
//     bool win = battle->doBattle();
//     EXPECT_EQ(win,true);
// }