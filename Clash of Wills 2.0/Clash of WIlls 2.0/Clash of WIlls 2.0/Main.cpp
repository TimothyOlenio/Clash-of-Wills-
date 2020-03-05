#include <iostream>
#include "Player.h"
#include "ItemSword.h"
#include "RoomManager.h"

using namespace std;

int main ()
{
	Player* myPlayer = new Player();
	Item* item = new ItemSword();
	Room* room = new Room();
	//item->
	myPlayer->AddToInventory(item);
	//myPlayer.AddToInventory(Item* ItemSword);
	myPlayer->DrawInventory();

	room->AddRoom(room);

	delete myPlayer;
	return 0;
};