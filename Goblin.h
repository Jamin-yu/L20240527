#pragma once

#include "Monster.h"

class FGoblin : public FMonster
{
public:
	FGoblin();
	~FGoblin();

	void Jump();
	virtual void Move() override; //�θ� ������ �ٽ� ���� *virtual / override
};

