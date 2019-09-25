#pragma once
#include "Creature.h"
class Monster :
	public Creature
{
public:
	Monster(int x, int y, std::string Name);
	void Chase(int heroX, int heroY);
	bool Eaten(int heroX, int heroY);

private:


};

