#include <iostream>
#include <conio.h>
#include <string>

/*class Prop
{
public:
	Prop(std::string name) 
	{ 
		std::cout << "Prop object has been created!" << std::endl;
		m_Name = name;
	}
	void Say() { std::cout << "My name is: " << m_Name << std::endl; }
	~Prop() { std::cout << "Prop object has been deleted!" << std::endl; }
private:
	std::string m_Name = "";
	int x = 0;
	int y = 0;
	int z = 0;

};*/

//Prop propobj; <- bad. Static memory allocation
//Prop* propobj = nullptr; //Declare pointer to a prop object
//Prop* pointerProp = new Prop(); //Dynamically allocating memory for the object



/*Static memory allocation for the object
Prop staticProp("staticProp");
Prop staticPropSecond("staticPropSecond");
Prop staticPropThird("staticPropThird");

//Dynamic seperate allocation and creation
Prop* pointerProp = nullptr;
pointerProp = new Prop("pointerProp");
pointerProp = new Prop("Test"); //These two lines are pointing to the same object

//Dynamic allocation and creation together
Prop* pointerPropSecond = new Prop("pointerPropSecond"); 

Prop* pointerPropThird = new Prop("pointerPropThird");
	
staticProp.Say();
pointerProp->Say();

delete pointerProp; //Free up memory when object is no longer needed
delete pointerPropSecond;*/

class Prop 
{
private:
	int m_maxHitPoints;
	int m_currentHitPoints;
	std::string m_name;

	int getDamagePercentage();

public:
	Prop();
	Prop(std::string name, int maxHitpoints, int startHitPoints) { m_name = name, m_maxHitPoints = maxHitpoints, m_currentHitPoints = startHitPoints;}
	~Prop() { std::cout << m_name << " has been deleted!" << std::endl; }

	void displayDetails() { std::cout << m_name << "'s current health is " << m_currentHitPoints << " and has a max possible health of " << m_maxHitPoints << "." << std::endl; }
	int getHitPoints(){ return m_currentHitPoints; }
	void setHitpoints(int points) { m_currentHitPoints = points; }
	void addHitPoints(int pointsToAdd) { m_currentHitPoints = m_currentHitPoints + pointsToAdd; }
	int getMaxHitPoints() { return m_maxHitPoints; }
	void setMaxHitPoints(int maxPoints) { m_maxHitPoints = maxPoints; }
};

class CopyCharacter 
{
public:
	std::string m_name;
	Prop m_prop;

	CopyCharacter();
	CopyCharacter(std::string name) { m_name = name }

};

class PointerCharacter
{
public:
	std::string m_name;
	Prop* m_prop;

	PointerCharacter();
	PointerCharacter(std::string name) { m_name = name }

};

int main() 
{
	Prop* propobj = new Prop("BoxMan", 100, 69);
	propobj->setHitpoints(50);
	propobj->displayDetails();
	delete propobj;



}
