#include "GoHomeAndSleepTilRested.h"

GoHomeAndSleepTilRested * GoHomeAndSleepTilRested::Instance()
{
	static GoHomeAndSleepTilRested instance;
	return &instance;
}

void GoHomeAndSleepTilRested::Enter(Miner *)
{
}

void GoHomeAndSleepTilRested::Execute(Miner *)
{
}

void GoHomeAndSleepTilRested::Exit(Miner *)
{
}
