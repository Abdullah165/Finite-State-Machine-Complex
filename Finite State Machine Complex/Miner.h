#pragma once
#include"BaseGameEntity.h"
#include"State.h"
#include"StateMachine.h"
#include"MinerGlobalState.h"
#include"QuenchThirst.h"

class Miner : public BaseGameEntity
{
public:

	Miner(int id);

	~Miner();

	void Update() override;

	StateMachine<Miner>* GetFSM()const;

	enum Location_Type
	{
		goldmine = 1,
		home,
		saloon,
		bank,
	};

	Location_Type Location();

	void ChangeLocation(Location_Type);

	void AddToGoldCarried(int);

	bool PocketsFull();

	void IncreaseFatigue();

	bool Thirsty();

private:

	//an instance of the state machine class
	StateMachine<Miner>* m_pStateMachine;

	Location_Type m_Location = home;

	int m_iGoldCarried = 0;

	int m_iMoneyInBank = 0;

	int m_iThirst = 0;

	int m_iFatigue = 0;
};

