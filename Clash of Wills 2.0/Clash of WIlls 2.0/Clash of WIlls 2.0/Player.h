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
	string item1 = "Dagger";

	std::map<char, int> AvailableChoices;
	Inventory* playerInventory;
	CharacterSheet* character;

	

	
};
#endif

