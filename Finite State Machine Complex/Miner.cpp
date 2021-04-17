#include "Miner.h"


Miner::Miner(int id) :
	m_Location(home),
	m_iGoldCarried(0),
	m_iMoneyInBank(0),
	m_iThirst(0),
	m_iFatigue(0)
{
	//set up state machine
	m_pStateMachine = new StateMachine<Miner>(this);
    m_pStateMachine->SetCurrentState(QuenchThirst::Instance());
    m_pStateMachine->SetGlobalState(MinerGlobalState::Instance());
}

Miner::~Miner()
{
	delete m_pStateMachine;
}

void Miner::Update()
{
	++m_iThirst;
	m_pStateMachine->Update();
}


StateMachine<Miner>* Miner::GetFSM() const
{
	return m_pStateMachine;
}

void Miner::ChangeLocation(Location_Type location)
{
	m_Location = location;
}

void Miner::AddToGoldCarried(int goldCarried)
{
	m_iGoldCarried += goldCarried;
}

inline bool Miner::PocketsFull()
{
	if (m_iGoldCarried == 10) return true;
	return false;
}

inline void Miner::IncreaseFatigue()
{
	++m_iFatigue;
}

inline bool Miner::Thirsty()
{
	if (m_iThirst == 5) return true;
	return false;
}
