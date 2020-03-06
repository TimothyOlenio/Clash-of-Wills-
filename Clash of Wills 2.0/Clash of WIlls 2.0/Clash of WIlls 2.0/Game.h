#ifndef __GAME_H
#define __GAME_H
#include "LinkedList.h"
#include "RoomManager.h"
#include "Room.h"

class Game
{
private: 
	RoomManager* theRoomManager;
public:
	void MoveToNextRoom(Room* data);
};
#endif