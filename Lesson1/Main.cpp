#include "Hero.h"
#include "Monster.h"
#include "conio.h"
#include <ctime>

int main() 
{
	srand(time(0));
	
	Hero heroobj(0,0,"11111", 5);
	//heroobj.display();

	Monster monsterobj(10,-25,"Mr Monster");
	Monster monsterobj2(25, -5, "Ghost");
	Monster monsterobj3(-35, 41, "Zombie");
	//monsterobj.display();

	while (heroobj.GetLives() != 0) 
	{
		while (heroobj.GetLives() != 0) 
		{
			heroobj.display();
			monsterobj.display();
			monsterobj2.display();
			monsterobj3.display();
			system("pause");
			system("CLS");
			monsterobj.Chase(heroobj.getX(), heroobj.getY());
			monsterobj2.Chase(heroobj.getX(), heroobj.getY());
			monsterobj3.Chase(heroobj.getX(), heroobj.getY());
			if (monsterobj.Eaten(heroobj.getX(), heroobj.getY()) == true || monsterobj2.Eaten(heroobj.getX(), heroobj.getY()) == true || monsterobj3.Eaten(heroobj.getX(), heroobj.getY()) == true)
			{
				break;
			}
		}
		heroobj.LoseLife();
		heroobj.Respawn();
	}
	system("CLS");
	std::cout << "Monster has eaten hero!" << std::endl;
	system("pause");
}

