#pragma once
#include <SDL.h>
#include <stdio.h>

class Game
{
private:
	SDL_Window* m_Window;
	SDL_Renderer* m_Renderer;

	int x = 0;
	int y = 50;
	int z = 100;

public:
	Game();
	~Game();

	void SetDisplayColour();

	void Render();

};

