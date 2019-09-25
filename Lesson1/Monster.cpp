#include "Monster.h"

Monster::Monster(int x, int y, std::string Name)
	:Creature(x, y, Name)
{
}

void Monster::Chase(int heroX, int heroY)
{
	if (m_Xpos < heroX)
	{
		right();
	}
	else if (m_Xpos > heroX) 
	{
		left();
	}

	if (m_Ypos < heroY)
	{
		down();
	}
	else if (m_Ypos > heroY)
	{
		up();
	}

}

bool Monster::Eaten(int heroX, int heroY)
{
	if (heroX == m_Xpos && heroY == m_Ypos) 
	{
		return true;
	}
	return false;
}
