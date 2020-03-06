#include "Room.h"

bool Room::RoomCompleted()
{
	return true;
}

Room::Room()
{
	name = "RoomName";
	description = "RoomDescription";
	allPlayerOptions[1] = { "Options" };
	availablePlayerOptions[1] = { "Options" };
}

Room::~Room()
{
}
