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
	//template* LinkedList::LinkedList() : mRoot(nullptr), mTail(nullptr), mSize(0) {}* linkedList;


	std::map<char, int> AvailableChoices;
	Inventory* playerInventory;
	CharacterSheet* character;

	void LoopInventory();
	void AddItemToInventory();

	string Dagger()
	{
		string Dagger = "Dagger";
		return Dagger;
	}
};
#endif

