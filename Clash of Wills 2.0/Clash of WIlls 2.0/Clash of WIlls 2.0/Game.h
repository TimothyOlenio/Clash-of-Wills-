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
	void changeRoom();

	void MoveToNextRoom(string roomName);

	string PrintDescription();
	string PlayerOptions();

	void TakePlayerOption();

	void CheckForSuccess();

	void GameLoop();
};
#endif