#include "Creature.h"

Creature::Creature(int x, int y, std::string Name)
{
	setX(x);
	setY(y);
	m_Name = Name;

}

void Creature::display()
{
	std::cout << m_Name << "'s x position is " << getX() << std::endl;
	std::cout << m_Name << "'s y position is " << getY() << std::endl;
	//std::cout << m_Name << "'s name is " << getName() << std::endl;
}

void Creature::left()
{
	setX(-1);
}

void Creature::right()
{
	setX(1);
}

void Creature::up()
{
	setY(-1);
}

void Creature::down()
{
	setY(1);
}

void Creature::setX(int x)
{
	m_Xpos = m_Xpos + x;
}

void Creature::setY(int y)
{
	m_Ypos = m_Ypos + y;
}

int Creature::getX()
{
	return m_Xpos;
}

int Creature::getY()
{
	return m_Ypos;
}

std::string Creature::getName()
{
	return m_Name;
}
