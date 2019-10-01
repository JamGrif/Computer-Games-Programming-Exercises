#include "Game.h"
#include <conio.h>
#undef main

int main(int argc, char* argv[])
{
	Game* game = new Game();

	if (game)
	{
		while (true)
		{
			game->SetDisplayColour();
			game->Render();
		}
		delete game;
		game = nullptr;
	}

	return 0;
}





