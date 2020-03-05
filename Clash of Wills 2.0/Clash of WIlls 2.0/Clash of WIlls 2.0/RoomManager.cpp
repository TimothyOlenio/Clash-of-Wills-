#include "RoomManager.h"

void RoomManager::AddRoom(RoomManager* data)
{
	Rooms.push_back(data);

}

void RoomManager::LoopRooms()
{
    itr = Rooms.begin();

    for (itr; itr != Rooms.end(); itr++)
    {
        RoomManager* itm = *itr;
        //std::cout << itm->name << std::endl;
    }
}

RoomManager::RoomManager()
{
}

RoomManager::~RoomManager()
{
}
