#ifndef __ITEM_H
#define __ITEM_H
#include <iostream>
#include <string>

using namespace std;

class Item 
{
public:
	string name;
	string type;
	void use();

	Item();
	~Item();


};
#endif // !__Items_H
