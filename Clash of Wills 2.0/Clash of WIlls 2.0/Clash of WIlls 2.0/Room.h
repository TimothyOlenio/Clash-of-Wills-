#ifndef __ROOM_H
#define __ROOM_H
#include <iostream>
#include <string>
#include <map>
#include "Inventory.h"


using namespace std;

class Room
{
private:
	Inventory* theInventory;
public:
	string name;
	string description;

	map<string, string> playerOptions;

	void PrintDescription();
	void PrintAvailableOptions(Inventory* inventoryItr);

	bool RoomCompleted();

	Room();
	~Room();


};
#endif // !__Items_H