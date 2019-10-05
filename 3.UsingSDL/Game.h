#pragma once
#include <SDL.h>
#include <stdio.h>
#include <iostream>
class Game
{
private:
	SDL_Window* m_Window;
	SDL_Renderer* m_Renderer;

	int red = 50;
	int green = 150;
	int blue = 200;

public:
	Game();
	~Game();
	void GameLoop();

	void SetDisplayColour();

	void Render();
	
};

