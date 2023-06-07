#include "gtest/gtest.h"
#include "../src/Location/AllLocations.h"
#include <string>
using std::string;

TEST(MapTests, SmallSizeUnderMax) {
    Village* vil1 = new Village("Village 1", "A village", 1);
    Dungeon* dun1 = new Dungeon("Dungeon 1", "A dungeon", 1);
    EXPECT_TRUE(vil1->getSize() <= 5);
    EXPECT_TRUE(dun1->getSize() <= 5);
}

TEST(MapTests, SmallSizeOverMin) {
    Village* vil2 = new Village("Village 2", "A village", 1);
    Dungeon* dun2 = new Dungeon("Dungeon 2", "A dungeon", 1);
    EXPECT_TRUE(vil2->getSize() >= 3);
    EXPECT_TRUE(dun2->getSize() >= 3);
}

TEST(MapTests, BigSizeUnderMax) {
    Village* vil3 = new Village("Village 3", "A village", 3);
    Dungeon* dun3 = new Dungeon("Dungeon 3", "A dungeon", 3);
    EXPECT_TRUE(vil3->getSize() <= 15);
    EXPECT_TRUE(dun3->getSize() <= 15);
}

TEST(MapTests, BigSizeOverMin) {
    Village* vil4 = new Village("Village 4", "A village", 3);
    Dungeon* dun4 = new Dungeon("Dungeon 4", "A dungeon", 3);
    EXPECT_TRUE(vil4->getSize() >= 9);
    EXPECT_TRUE(dun4->getSize() >= 9);
}

TEST(MapTests, NotInRange) {
    Village* vil5 = new Village("Village 5", "A village", 1);
    Dungeon* dun5 = new Dungeon("Dungeon 5", "A dungeon", 1);
    EXPECT_THROW(vil5->getLocation(-1,-1), string);
    EXPECT_THROW(dun5->getLocation(6,6), string);
    EXPECT_THROW(vil5->getLocation(2,-1), string);
    EXPECT_THROW(dun5->getLocation(1,6), string);
}

TEST(MapTests, InRange) {
    Village* vil6 = new Village("Village 6", "A village", 1);
    Dungeon* dun6 = new Dungeon("Dungeon 6", "A dungeon", 1);
    EXPECT_NO_THROW(vil6->getLocation(1,1));
    EXPECT_NO_THROW(dun6->getLocation(0,2));
}
