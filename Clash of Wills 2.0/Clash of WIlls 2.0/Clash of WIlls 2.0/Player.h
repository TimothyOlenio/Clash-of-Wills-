#ifndef __PLAYER_H
#define PLAYER_H
#include <iostream>
#include <map>
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

	struct node
	{
		string item1;
		struct node* next;
	};

	class linked_list
	{
	private:
		node* head, * tail;
	public:
		linked_list()
		{
			head = NULL;
			tail = NULL;
		}
	};

	void add_node(int n);
};
#endif

