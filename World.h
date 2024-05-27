#pragma once

#include"Player.h"
#include"Monsters.h"

class World
{
public:
	Floor Floors[100];
	Wall Walls[100];
	Player MyPlayer;
	Monsters Goblin[100];
	Monsters Boar[100];
	Monsters Slime[100];
	Gold Golds[100];

	void Finish();
};

class Floor
{
	int X;
	int Y;
	int Shape;
};

class Wall
{
	int X;
	int Y;
	int Shape;

	void Block();
};
