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
	while (true)
	{
		SetDisplayColour();
		Render();
		
		std::cout << red << std::endl;
		std::cout << green << std::endl;
		std::cout << blue << std::endl;
	}
}

void Game::SetDisplayColour(void)
{
	red++;
	green++;
	blue++;
	if (red == 255) 
	{
		red = 30;
	}
	if (green == 255)
	{
		green = 30;
	}
	if (blue == 255)
	{
		blue = 30;
	}
	//Target renderer, red, green, blue, alpha
	SDL_SetRenderDrawColor(m_Renderer, red, green, blue, 255);
}

void Game::Render()
{
	//wipe the display to the colour we just set
	SDL_RenderClear(m_Renderer);

	//show what we've drawn
	SDL_RenderPresent(m_Renderer);

	//pause for 5 seconds
	//SDL_Delay(5000);

}

