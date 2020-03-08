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
	Room* currentRoom;
	Inventory* playerInventory;
	bool gameRunning;

	int playerChoice;

public:
	void MoveToNextRoom(string roomName);

	void PrintDescription();
	void PlayerOptions(Inventory* inventory);

	int TakePlayerOption();

	void CheckForSuccess(string playerChoice);

	void GameLoop();
};
#endif