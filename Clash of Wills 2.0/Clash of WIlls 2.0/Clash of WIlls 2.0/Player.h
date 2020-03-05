#ifndef __PLAYER_H
#define PLAYER_H
#include <iostream>
#include <map>
#include "LinkedList.h"
#include "Inventory.h"
#include "CharacterSheet.h"

#pragma once

using namespace std;

struct Player 
{
private:
	Inventory* myInventory;


public:

	void AddToInventory(Item* data);

	
};
#endif

