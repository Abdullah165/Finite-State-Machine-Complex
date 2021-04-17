#pragma once
#include"State.h"
#include"Miner.h"

class GoHomeAndSleepTilRested : State<Miner>
{
public:
	static GoHomeAndSleepTilRested* Instance();

	// Inherited via State
	virtual void Enter(Miner *) override;
	virtual void Execute(Miner *) override;
	virtual void Exit(Miner *) override;
};

