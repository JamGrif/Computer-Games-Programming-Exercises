#pragma once
#include "Creature.h"
class Hero : 
	public Creature
{
public:
	Hero(int x, int y, std::string Name, int Lives);

	void display();

	int GetLives();
	void Respawn();
	void LoseLife();

private:
	int m_Lives;
	int m_Score;


};

