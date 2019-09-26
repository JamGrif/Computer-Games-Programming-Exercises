#pragma once
#include <iostream>
#include <string>
class Creature
{
public:
	Creature(int x, int y, std::string Name);
	

	void display();

	void left();
	void right();
	void up();
	void down();

	void setX(int);
	void setY(int);

	int getX();
	int getY();

	std::string getName();


protected:
	int m_Xpos = 0, m_Ypos = 0;
	std::string m_Name = "";

};

