#include "Game.h"

void Game::MoveToNextRoom(Room* data)
{
	theRoomManager->ProgressRoom(data);
}
