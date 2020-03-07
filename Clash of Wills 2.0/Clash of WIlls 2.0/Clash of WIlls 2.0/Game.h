#ifndef __GAME_H
#define __GAME_H
#include "LinkedList.h"
#include "RoomManager.h"
#include "Room.h"
#include "Items.h"
#include "Inventory.h"

class Game
{
private: 
	RoomManager* theRoomManager;
public:
	void MoveToNextRoom(string roomName);

	void PrintDescription();
	void PlayerOptions(Inventory* inventoryItr);

	int TakePlayerOption();

	void CheckForSuccess();

	void GameLoop();
};
#endif