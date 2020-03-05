#ifndef __STATEMANAGER_H
#define __STATEMANAGER_H
#include <iostream>

using namespace std;

class StateManager
{
public:
	void EnterState(StateManager* State);
	void ExitState(StateManager* State);

	bool CheckState(StateManager* State);
};

#endif