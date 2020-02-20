#ifndef __LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <string>
#include "Node.h"
#pragma once

using namespace std;

template<typename T>

class LinkedList
{
private:
	class Node 
	{
		public:
			T mData;
			Node* mNext;
	};

public:
	class Iterator
	{
	private:
		Node* mNode;
	public:
		//Sets mNode to the passed in node
		void operator = (Node* node)
		{
			mNode = node;
		}
		//Increment mNode at the end of the line
		void operator++(int)
		{
			mNode = mNode->mNext;
			_ASSERT_EXPR(mNode != nullptr, L"cannot seek iterator after end");
		}
		//Increment mNode when this function is read
		void operator++()
		{
			mNode = mNode->mNext;
			_ASSERT_EXPR(mNode != nullptr, L"cannot seek iterator after end");
		}
		//Loop through the Linked List
		void operator+=(unsigned rhs)
		{
			for (unsigned i = 0; i < rhs; i++)
			{
				mNode = mNode->mNext;
				_ASSERT_EXPR(mNode != nullptr, L"cannot seek iterator after end");

			}
		}
	};
	void linked_list();


	void add_node(int n);
};
#endif

