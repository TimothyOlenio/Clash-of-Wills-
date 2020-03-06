#include "RoomManager.h"
#include "RoomBedroomInn.h"
#include <iostream>

void RoomManager::AddRoom(Room *data)
{
	Rooms.push_back(data);
}

void RoomManager::LoopRooms()
{
    itr = Rooms.begin();

    for (itr; itr != Rooms.end(); itr++)
    {
        Room* itm = *itr;
        std::cout << itm->name << std::endl;
    }
}

void RoomManager::DrawRoom()
{
    myRoomManager->LoopRooms();
}

RoomManager::RoomManager()
{
    myRoomManager = new RoomManager();

}

RoomManager::~RoomManager()
{
}
