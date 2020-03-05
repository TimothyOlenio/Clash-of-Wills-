#include "Player.h"

Player::Player()
{
	myInventory = new Inventory();
}

void Player::AddToInventory(Item* data)
{
	myInventory->AddItem(data);
}

void Player::DrawInventory()
{
	myInventory->LoopInventory();
}
