#ifndef __NODE_H
#define NODE_H
#include <iostream>
#include <string>

using namespace std;

struct Node
{
public:
	string item1;
	struct node* next;
};
#endif

