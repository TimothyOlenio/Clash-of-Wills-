#ifndef __INVENTORY_H
#define INVENTORY_H
#include "LinkedList.h"
#include "Items.h"

class Inventory 
{
public:

	LinkedList<Item*> PlayerItems;

	LinkedList<Item*>::Iterator itr;

	void AddItem(Item* data);
	void LoopInventory();

	Inventory();
	~Inventory();
	
};
#endif


