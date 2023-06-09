#include "gtest/gtest.h"
#include "../src/Inventory/Inventory.h"
#include <string>
using std::string;

TEST(InventoryTests,Constructor){
    Inventory* testInventory = new Inventory();
    EXPECT_NE(testInventory,nullptr);
}

TEST(InventoryTests,itemConstructor){
    Item* testItem = new Item();
    EXPECT_NE(testItem,nullptr);
}

TEST(InventoryTests, addItem){
    Inventory* testInventory = new Inventory();
    Item* testItem = new Item();
    testInventory->add_item(testItem);
    EXPECT_EQ(testInventory->get_inventory().at(0),testItem);
}

