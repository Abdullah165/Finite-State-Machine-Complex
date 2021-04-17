#pragma once
#include"State.h"
#include"Miner.h"

class MinerGlobalState:public State<Miner>
{
public:

	static MinerGlobalState* Instance();

	// Inherited via State
	virtual void Enter(Miner *) override;
	virtual void Execute(Miner *) override;
	virtual void Exit(Miner *) override;
};

