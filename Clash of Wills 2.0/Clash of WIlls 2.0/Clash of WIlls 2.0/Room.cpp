#include "Room.h"

void Room::PrintDescription()
{
	std::cout << description << std::endl;
}

void Room::PrintAvailableOptions(Inventory* inventory)
{
	auto newIter = inventory->itr;

	for (auto const& option : playerOptions)
	{
		newIter = inventory->PlayerItems.begin();

		for (newIter; newIter != nullptr; newIter++)
		{
			Item* item = *newIter;
			if (option.first == " ")
			{
				std::cout << option.second // string's value 
					<< std::endl;
				break;
			}
			else if (option.first == item->name)
			{
				std::cout << option.first  // string (key)
					<< ':' << option.second << std::endl;
				break;
			}
		}
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
