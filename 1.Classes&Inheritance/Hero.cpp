#include "Hero.h"

Hero::Hero(int x, int y, std::string Name, int Lives)
	:Creature(x,y,Name)
{
	m_Lives = Lives;
	m_Score = 0;
}

void Hero::display()
{
	Creature::display();
	std::cout << m_Name << " has " << m_Lives << " lives" << std::endl;
	//std::cout << m_Name << " score is " << m_Score << std::endl;
}

int Hero::GetLives()
{
	return m_Lives;
}

void Hero::Respawn()
{
	//random x between -50 and 50
	int Range = (50 - -50) + 1;
	m_Xpos =  -50 + rand() % Range;
	//random y between -50 and 50
	Range = (50 - -50) + 1;
	m_Ypos = -50 + rand() % Range;

	std::cout << m_Name << " has respawned at " << m_Xpos << " and " << m_Ypos << std::endl;
}

void Hero::LoseLife()
{
	m_Lives--; 
}
