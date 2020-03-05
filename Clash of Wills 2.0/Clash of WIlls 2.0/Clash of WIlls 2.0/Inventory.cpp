#include "Inventory.h"
#include "ItemSword.h"
#include <iostream>

void Inventory::AddItem(Item *data)
{
    PlayerItems.push_back(data);
}

void Inventory::LoopInventory()
{
    itr = PlayerItems.begin();

    for (itr; itr != PlayerItems.end(); itr++)
    {
        Item* itm = *itr;
        std::cout << itm->name << std::endl;
    }
}

Inventory::Inventory()
{

}

Inventory::~Inventory()
{
}
