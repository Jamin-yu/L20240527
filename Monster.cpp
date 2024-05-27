#include "Monster.h"
#include <iostream>

using namespace std;

FMonster::FMonster()
{
	cout << "FMonster Constructor" << endl;

	HP = 0;
	Gold = 0;
}

FMonster::~FMonster()
{
	cout << "FMonster Destructor" << endl;
}

void FMonster::Move()
{
}

void FMonster::Attack()
{
}

void FMonster::Pickup()
{
}

void FMonster::Jump()
{
}

int FMonster::GetGold()
{
	return 0;
}

void FMonster::SetGold(int NewGold)
{
}

void FMonster::Die()
{
}
