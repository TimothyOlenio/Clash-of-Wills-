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

void Game::PlayerOptions(Inventory* inventoryItr)
{
	Room* room = theRoomManager->CurrentRoom();
	room->PrintAvailableOptions(inventoryItr);
}

int Game::TakePlayerOption()
{
	int playerChoice;
	std::cin >> playerChoice;

	return playerChoice;
}
