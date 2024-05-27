#include <iostream>

using namespace std;

#include "World.h"
#include "Player.h"
#include "Monsters.h"
#include "Gold.h"


int main()
{
	World* MyWorld = new World;
	Player* MyPlayer = new Player;
	Monsters* Goblin = new Monsters;
	Monsters* Boar = new Monsters;
	Monsters* Slime = new Monsters;


	MyPlayer->Move();
	MyPlayer->Attack();


	Goblin->Move();
	Goblin->Run();
	Goblin->Attack();

	Boar->Move();
	Boar->Run();
	Boar->Attack();

	Slime->Move();
	Slime->Slide();
	Slime->Attack();


	delete MyWorld;
	delete MyPlayer;
	delete Goblin;
	delete Boar;
	delete Slime;
	return 0;
}