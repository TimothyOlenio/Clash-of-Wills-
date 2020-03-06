#ifndef __ROOM_H
#define __ROOM_H
#include <iostream>
#include <string>
#include <map>


using namespace std;

class Room
{
public:
	string name;
	string description;

	map<string, string> playerOptions;

	void PrintDescription();
	void PrintAvailableOptions();

	bool RoomCompleted();

	Room();
	~Room();


};
#endif // !__Items_H