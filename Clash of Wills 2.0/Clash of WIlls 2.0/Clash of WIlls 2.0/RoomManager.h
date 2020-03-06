#ifndef __ROOMMANAGER_H
#define __ROOMMANAGER_H
#include "LinkedList.h"
#include "Room.h"

class RoomManager
{
public:


	LinkedList<Room*> Rooms;

	LinkedList<Room*>::Iterator itr;

	void AddRoom(Room* data);
	void LoopRooms();

	void DrawRoom();


	RoomManager();
	~RoomManager();

};
#endif