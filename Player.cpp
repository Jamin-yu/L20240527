#include "Player.h"

FPlayer::FPlayer() : HP(0), Gold(0) //초기화 리스트
{
	//HP = 0;
	//Gold = 0;
}

FPlayer::~FPlayer()
{
}

void FPlayer::Move()
{
}

void FPlayer::Die()
{
}

void FPlayer::Attack()
{
}

void FPlayer::Pickup(int pickedupItem)
{
}

int FPlayer::GetGold()
{
	return Gold;
}

void FPlayer::SetGold(int NewGold)
{
	if (NewGold >= 0)
	{
		Gold = NewGold;
	}
}
