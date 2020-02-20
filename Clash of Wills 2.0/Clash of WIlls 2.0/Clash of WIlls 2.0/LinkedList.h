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
		//Check if passed in node is the current mNode in the list
		bool operator==(Node* node) const
		{
			return mNode == node;
		}
		//Check if passed in node is NOT the current mNode in the List
		bool operator!=(Node* node) const
		{
			return mNode == node;
		}
		//Dereference the operator (to display the data and not the address)
		T& operator*() const
		{
			return mNode->mData;
		}
	};
private:
	Node* mRoot;
	Node* mTail;
	unsigned mSize;

public:
	//Add new item to the end of the list
	void push_back(T data)
	{
		Node* node = new Node();
		node->mData = data;
		node->mNext = nullptr;

		if (mTail)
		{
			mTail->mNext = node;
			mTail = node;
		}
	}


	void add_node(int n);
};
#endif

