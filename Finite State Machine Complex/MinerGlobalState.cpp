#include "MinerGlobalState.h"

MinerGlobalState * MinerGlobalState::Instance()
{
	static MinerGlobalState instance;
	return &instance;
}

void MinerGlobalState::Enter(Miner *)
{

}

void MinerGlobalState::Execute(Miner *)
{

}

void MinerGlobalState::Exit(Miner *)
{

}
