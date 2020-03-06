#include "Game.h"

void Game::changeRoom()
{
	if (theRoomManager->)
	{

	}
}

void Game::MoveToNextRoom(string roomName)
{
	theRoomManager->ProgressRoom(roomName);
}

string Game::PrintDescription()
{
	Room* room = theRoomManager->CurrentRoom();
	return room->description;
}

string Game::PlayerOptions()
{
	Room* room = theRoomManager->CurrentRoom();
	return room->availablePlayerOptions;
}
