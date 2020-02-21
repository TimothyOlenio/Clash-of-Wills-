#ifndef __LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <string>
#include "Node.h"
#pragma once

using namespace std;

template<typename T>

class LinkedList : public
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
		else
		{
			mRoot = node;
			mTail = node;
		}
		mSize += 1;
	}

	//Remove the last item in the list
	void pop_back()
	{
		if (mTail == nullptr)
		{
			//empty list, do nothing
		}

		if (mRoot->mNext == nullptr)
		{
			// one element, remove it
			delete mRoot;
			mRoot = nullptr;
			mTail = nullptr;
		}
		else
		{
			// n elements, remove last
			Node* prev = mRoot;
			while (prev->mNext != mTail)
			{
				//look for second-last node
				prev = prev->mNext;
			}
			prev->mNext = nullptr;
			delete mTail;
			mTail = prev;
		}
		mSize += 1;
	}

	// Insert item somewhere in the middle of the list
	void insert(const Iterator& it, T data)
	{
		//instert after
		Node* node = new Node();
		node->mData = data;
		node->mNext = nullptr;

		Node* temp = mRoot;
		while (it != temp && temp != nullptr)
		{
			temp = temp->mNext;
		}

		if (temp)
		{
			node->mNext = temp->mNext;
			temp->mNext = node;
		}
		else
		{
			// TODO: throw an exception for invalild iterator
			return;
		}
	}

	//Remove an item from somewhere in the middle of the list
	void remove(const Iterator& it)
	{
		Node* prev = mRoot;

		if (prev == nullptr)
		{
			//TODO: throw an exception for invalid iterator
			return;
		}

		while (it != prev->mNext && prev->mNext != nullptr)
		{
			prev = prev->mNext;
		}

		if (prev->mNext)
		{
			Node* temp = prev->mNext;
			prev->mNext = temp->mNext;
			delete temp;
		}
		else
		{
			//TODO: throw an exception for invalid iterator
			return;
		}
		mSize -= 1;
	}

	//Get the first element in the list
	Node* begin() const
	{
		return mRoot;
	}

	//Get the last element in the list
	Node* end() const
	{
		return nullptr;
	}

	//Get the entire list
	unsigned size() const
	{
		return mSize;
	}

	LinkedList() : mRoot(nullptr), mTail(nullptr), mSize(0) {}
	~LinkList()
	{
		if (mRoot)
		{
			Node* next = mRoot->mNext;

			while (next)
			{
				Node* temp = next;
				next = next->mNext;
				delete temp;
			}
			delete mRoot;
		}
	}

	void add_node(int n);
};
#endif

