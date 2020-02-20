#ifndef __LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <string>
#include "Node.h"
#pragma once

using namespace std;

class LinkedList
{
private:
	struct node
	{
		
	};

	node* head, * tail;
public:
	void linked_list();


	void add_node(int n);
};
#endif

