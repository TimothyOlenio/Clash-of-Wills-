#include "Inventory.h"

void Inventory::AddItem(Item *data)
{
    PlayerItems.push_back(data);
}

void Inventory::LoopInventory()
{
    itr = PlayerItems.begin;

    for (itr; itr != PlayerItems.end(); itr++)
    {
        Item* itm = *itr;
    }
}

Inventory::Inventory()
{
	
}

Inventory::~Inventory()
{
}
