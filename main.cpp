#include <iostream>
#include <cstdlib>
#include <ctime>

#include "World.h"
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "WildBoar.h"

#include <vector> //TArray


using namespace std;


int main()
{
	//1~3
	//Player 1
	srand(time(0));
	FPlayer Player;
	int GoblinCount = rand() % 3 + 1;
	vector<FGoblin*> Goblins;
	

	for (int i = 0; i < GoblinCount; ++i)
	{
		Goblins.push_back(new FGoblin);
		Goblins[i]->SetGold(100 + i);
	}
	
	for (int i = 0; i < GoblinCount; ++i)
	{
		cout << Goblins[i]->GetGold() << endl;
	}

	for (int i = 0; i < GoblinCount; ++i) //지우기
	{
		delete Goblins[i];
	}
	
	Goblins.clear(); //화살표까지 지우기
	
	FSlime Slime;
	FWildBoar Wildboar;
 
	
	return 0;
}