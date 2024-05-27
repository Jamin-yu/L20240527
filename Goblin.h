#pragma once

#include "Monster.h"

class FGoblin : public FMonster
{
public:
	FGoblin();
	virtual ~FGoblin();

	void Jump();
	virtual void Move() override; //부모에 있지만 다시 정의 *virtual / override
};

