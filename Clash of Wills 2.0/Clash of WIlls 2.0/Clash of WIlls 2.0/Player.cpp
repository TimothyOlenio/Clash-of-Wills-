#include "Player.h"

void Player::add_node(int n)
{
    node* tmp = new node;
    tmp->item1 = n;
    tmp->next = NULL;

  

    if (head == NULL)
    {
        head = tmp;
        tail = tmp;
    }
    else
    {
        tail->next = tmp;
        tail = tail->next;
    }
}

Player::linked_list::linked_list()
{
    head = NULL;
    tail = NULL;
}
