#ifndef __PLAYER_H
#define PLAYER_H
#include <iostream>
#include <map>
#include "LinkedList.h"
#include "Inventory.h"
#include "CharacterSheet.h"

using namespace std;

class Player 
{
private:
	Inventory* myInventory;


public:
	Player();
	void AddToInventory(Item* data);
	void DrawInventory();

};
#endif

