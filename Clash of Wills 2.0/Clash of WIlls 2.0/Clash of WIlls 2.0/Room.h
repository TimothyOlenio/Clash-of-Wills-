#ifndef __ROOM_H
#define __ROOM_H
#include <iostream>
#include <string>

using namespace std;

class Room
{
public:
	string name;
	string description;
	string allPlayerOptions[1];
	string availablePlayerOptions[1];

	bool RoomCompleted();

	Room();
	~Room();


};
#endif // !__Items_H