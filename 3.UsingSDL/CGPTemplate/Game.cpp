#include "Game.h"

Game::Game()
{
	
	m_Window = nullptr;
	m_Renderer = nullptr;

	//start up
	SDL_Init(SDL_INIT_VIDEO);

	//create the window
	/*m_Window = SDL_CreateWindow(
		"My First Window", //title
		250,			   //Initial x position
		50,				   //initial y position
		640,			   //width, in pixels
		480,			   //height, in pixels
		0				   //window behavious flags
	);*/

	m_Window = SDL_CreateWindow("My First Window", 250, 50, 640, 480, 0);

	if (!m_Window) 
	{
		printf("Window initialisation failed: %s \n", SDL_GetError());
		printf("Press any key to continue\n");
		getchar();
		return;
	}

	/*m_Renderer = SDL_CreateRenderer(
		m_Window,		   //link the renderer to our newly created win
		-1,				   //index rendering driver 
		0				   //renderer behaviour flags
		);*/
	m_Renderer = SDL_CreateRenderer(m_Window, -1, 0);

	if (!m_Renderer) 
	{
		printf("RENDERER initialisation failed: %s\n", SDL_GetError());
		printf("Press any key to conitune\n");
		getchar();
		return;
	}
}

Game::~Game()
{
	//Destroy things in the reverse order they were created
	if (m_Renderer) 
	{
		SDL_DestroyRenderer(m_Renderer);
	}
	if (m_Window) 
	{
		SDL_DestroyWindow(m_Window);
	}
}

void Game::SetDisplayColour()
{
	if (m_Renderer) 
	{
		//render in red
		/*int result = SDL_SetRenderDrawColor(
			m_Renderer,		//target renderer
			255,			//r
			34,				//g
			70,				//b
			255				//alpha
		);*/
		
		if (x == 255) {
			x = 0;
		}
		if (y == 255) {
			y = 0;
		}
		if (z == 255) {
			z = 0;
		}
		int result = SDL_SetRenderDrawColor(m_Renderer, x, y, z, 255);
		x++;
		y++;
		z++;
	}
}

void Game::Render() 
{
	//wipe the display to the colour we just set
	SDL_RenderClear(m_Renderer);

	//show what was drawn
	SDL_RenderPresent(m_Renderer);

	//pause for 5 seconds
	SDL_Delay(1000);
}
