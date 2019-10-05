#pragma once
#include <SDL.h>
#include "Input.h"
#include <stdio.h>
#include <iostream>
class Game
{
public:
	Game();
	~Game();
	void GameLoop();

	void SetDisplayColour();

	void Render();

	void CheckKeyPressed();

	

private:
	SDL_Window* m_Window;
	SDL_Renderer* m_Renderer;

	int red = 50;
	int green = 150;
	int blue = 200;

	
	Input* input = new Input();
};

