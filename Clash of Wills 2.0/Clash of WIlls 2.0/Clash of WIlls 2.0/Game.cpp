#include "Game.h"

void Game::MoveToNextRoom(string roomName)
{
	theRoomManager->ProgressRoom(roomName);
}
