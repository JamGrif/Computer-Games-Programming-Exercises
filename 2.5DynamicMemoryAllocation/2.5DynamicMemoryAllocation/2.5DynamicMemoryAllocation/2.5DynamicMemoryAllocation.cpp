#include <iostream>
using namespace std;

// * is deference
// & the address of variable


int AddInts(int a, int b) 
{
	return a + b;
}


int main()
{
	int fish = 5;
	int dog = 0;
	int* address;
	address = &fish; //memory address of fish
	dog = *address; //dog contains the value of the memory address of fish

	cout << dog << endl;



}




/*struct Vector3
{
	float x, y, z;
};

int svalue = 5; //stack allocation
int sarray[5]; //stack array
sarray[0] = 2;
sarray[1] = 3;
sarray[2] = 4;
Vector3 svector; //stack object creation


int* hvalue = new int; //heap allocation
*hvalue = 6;
int* harray = new int[5]; //heap array
harray[0] = 2;
harray[1] = 3;
harray[2] = 4;
Vector3* hvector = new Vector3; //heap object creation


cout << *hvalue << endl;

delete hvalue;
delete[] harray;
delete hvector;*/