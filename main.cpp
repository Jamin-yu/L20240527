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
	//FPlayer Player;
	//vector<FMonster*> Monsters;
	//Monsters.push_back(new FMonster);
	//Monsters.push_back(new FGoblin);

	//for (int i = 0; i < Monsters.size(); ++i)
	//{
		//Monsters[i]->Move();

	//}
	
	FMonster* Monster = new FGoblin();

	Monster->Move();

	
	return 0;
}