#include "Room.h"

void Room::PrintDescription()
{
	std::cout << description << std::endl;
}

void Room::PrintAvailableOptions()
{
	for (auto const& option : playerOptions)
	{
		std::cout << option.first  // string (key)
			<< ':'
			<< option.second // string's value 
			<< std::endl;
	}

}

bool Room::RoomCompleted()
{
	return true;
}

Room::Room()
{
	name = "RoomName";
	description = "RoomDescription";
	//allPlayerOptions[1] = { "Options" };
	//availablePlayerOptions[1] = { "Options" };

	playerOptions[" "] = "Default option";

	playerOptions["dagger"] = "Print option";
}

Room::~Room()
{
}
