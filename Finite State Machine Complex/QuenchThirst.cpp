#include "QuenchThirst.h"

QuenchThirst * QuenchThirst::Instance()
{
	static QuenchThirst instance;
	return &instance;
}

void QuenchThirst::Enter(Miner *)
{
}

void QuenchThirst::Execute(Miner *)
{
}

void QuenchThirst::Exit(Miner *)
{
}
