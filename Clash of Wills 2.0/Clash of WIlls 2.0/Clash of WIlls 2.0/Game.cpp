#include "Game.h"


void Game::MoveToNextRoom(string roomName)
{
	theRoomManager->ProgressRoom(roomName);
}

void Game::PrintDescription()
{
	Room* room = theRoomManager->CurrentRoom();
	room->PrintDescription();
}

void Game::PlayerOptions()
{
	Room* room = theRoomManager->CurrentRoom();
	room->PrintAvailableOptions(Item* inventoryItr);
}
