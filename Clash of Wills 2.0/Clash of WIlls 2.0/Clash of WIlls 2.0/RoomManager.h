#ifndef __ROOMMANAGER_H
#define __ROOMMANAGER_H
#include "LinkedList.h"
#include "Room.h"

class RoomManager
{
public:
	LinkedList<RoomManager*> Rooms;

	LinkedList<RoomManager*>::Iterator itr;

	void AddRoom(RoomManager* data);
	void LoopRooms();

	RoomManager();
	~RoomManager();

};
#endif