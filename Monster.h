#pragma once
class FMonster
{
public:
	FMonster();
	virtual ~FMonster();
	
	virtual void Move(); //virtual function table : �ڽĿ��� ������ �ϸ� Ȯ���ϰ� ��� (�����Լ�)
	void Attack();
	void Pickup();
	int GetGold();
	void SetGold(int NewGold);


protected: 
	int HP;
	int Gold;

	void Die();
};

