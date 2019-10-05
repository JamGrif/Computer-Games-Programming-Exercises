#include "Game.h"

Game::Game()
{
	m_Window = nullptr;
	m_Renderer = nullptr;

	//start up
	SDL_Init(SDL_INIT_VIDEO);

	//create the window
	//Title, initial x position, initial y position, width in pixels, height in pixels, window behaviour flags
	m_Window = SDL_CreateWindow("Using SDL", 250, 50, 640, 480, 0);

	if (!m_Window) 
	{
		printf("WINDOW initialisation failed: %s\n", SDL_GetError());
		printf("Press any key to continue\n");
		getchar();
		return;
	}

	//now create the renderer
	//link renderer to newly created window,index rendering driver, renderer behaviour flags
	m_Renderer = SDL_CreateRenderer(m_Window, -1, 0);

	if (!m_Renderer) 
	{
		printf("RENDERER initialisation failed: %s\n", SDL_GetError());
		printf("Press any key to continue\n");
		getchar();
		return;
	}
}

Game::~Game()
{
	//Destroy in reverse order they were created
	if (m_Renderer) 
	{
		SDL_DestroyRenderer(m_Renderer);
	}

	if (m_Window) 
	{
		SDL_DestroyWindow(m_Window);
	}
}

void Game::GameLoop()
{
	
	while (!input->KeyIsPressed(KEY_ESCAPE)) //Game ends if escape is pressed
	{

		CheckKeyPressed();
		SetDisplayColour();
		Render();

	}

	delete input;
	input = nullptr;
}

void Game::SetDisplayColour(void)
{
	SDL_SetRenderDrawColor(m_Renderer, red, green, blue, 255);
}

void Game::Render()
{
	//wipe the display to the colour we just set
	SDL_RenderClear(m_Renderer);

	//show what we've drawn
	SDL_RenderPresent(m_Renderer);

}

void Game::CheckKeyPressed()
{
	input->Update();
	if (input->KeyIsPressed(KEY_R))
	{
		if (red++ > 255) { red = 0; }
	}
	if (input->KeyIsPressed(KEY_G))
	{
		if (green++ > 255) { green = 0; }
	}
	if (input->KeyIsPressed(KEY_B))
	{
		if (blue++ > 255) { blue = 0; }
	}
	if (input->KeyIsPressed(KEY_E))
	{
		red = 0, green = 0, blue = 0;
	}
	if (input->KeyIsPressed(KEY_N))
	{
		red = 255, green = 255, blue = 255;
	}
}

