#include <iostream>
#include "Player.h"
#include "ItemSword.h"

using namespace std;

int main ()
{
	Player* myPlayer = new Player();
	Item* item = new ItemSword();
	//item->
	myPlayer->AddToInventory(item);
	//myPlayer.AddToInventory(Item* ItemSword);
	myPlayer->DrawInventory();
	delete myPlayer;
	return 0;
};