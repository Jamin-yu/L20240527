#pragma once
class FMonster
{
public:
	FMonster();
	virtual ~FMonster();
	
	virtual void Move(); //virtual function table : 자식에서 재정의 하면 확인하고 써라 (가상함수)
	void Attack();
	void Pickup();
	int GetGold();
	void SetGold(int NewGold);


protected: 
	int HP;
	int Gold;

	void Die();
};

