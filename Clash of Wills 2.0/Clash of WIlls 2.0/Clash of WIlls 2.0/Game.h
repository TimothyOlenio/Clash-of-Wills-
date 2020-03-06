#ifndef __GAME_H
#define __GAME_H
#include "LinkedList.h"
#include "RoomManager.h"
#include "Room.h"
#include "Items.h"

class Game
{
private: 
	RoomManager* theRoomManager;
public:
	void MoveToNextRoom(string roomName);

	void PrintDescription();
	void PlayerOptions();

	void TakePlayerOption();

	void CheckForSuccess();

	void GameLoop();
};
#endif