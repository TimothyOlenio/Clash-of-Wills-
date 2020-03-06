#include <iostream>
#include "Player.h"
#include "ItemSword.h"
#include "RoomBedroomInn.h"
#include "RoomManager.h"

using namespace std;

int main ()
{
	Player* myPlayer = new Player();
	Item* item = new ItemSword();

	RoomManager* roomManager = new RoomManager();
	Room* room = new RoomBedroomInn();

	//item->
	myPlayer->AddToInventory(item);

	roomManager->AddRoom(room);

	//myPlayer.AddToInventory(Item* ItemSword);
	myPlayer->DrawInventory();
	roomManager->DrawRoom();


	delete myPlayer;
	return 0;
};