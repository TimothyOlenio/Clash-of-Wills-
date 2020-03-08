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

void Game::PlayerOptions(Inventory* inventory)
{
	Room* room = theRoomManager->CurrentRoom();
	room->PrintAvailableOptions(inventory);
}

int Game::TakePlayerOption()
{
	std::cin >> playerChoice;

	return playerChoice;
}

void Game::CheckForSuccess(string playerChoice)
{
	Room* room = theRoomManager->CurrentRoom();
	room->PrintResult();
}

void Game::GameLoop()
{
	do
	{
		currentRoom = theRoomManager->CurrentRoom();
		MoveToNextRoom(currentRoom->name);
		PrintDescription();
		PlayerOptions(playerInventory->itr);
		TakePlayerOption();
		CheckForSuccess(currentRoom->);

	} while (gameRunning);
	
}
