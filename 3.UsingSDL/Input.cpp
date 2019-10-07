#include "Input.h"

Input::Input()
{
	for (int i = 0; i < SIZE_OF_KEYS_PRESSED_ENUM; i++) 
	{
		m_keysPressed[i] = NULL;
	}
	
}

Input::~Input()
{

}

void Input::Update()
{
	//loop through all the events in the event list
	//|| SDL_PollEvent(&m_MouseEvent) != NULL
	while (SDL_PollEvent(&m_KeyEvent) != NULL && SDL_PollEvent(&m_MouseEvent) != NULL)
	{

		//first check for keydown
		if (m_KeyEvent.type == SDL_KEYDOWN) {
			//cache the code of key we pressed for easier debugging
			SDL_Keycode keyPressed = m_KeyEvent.key.keysym.sym;

			//update keys
			switch (keyPressed) 
			{
			case SDLK_ESCAPE:
				m_keysPressed[KEY_ESCAPE] = true;
				break;

			case SDLK_r:
				m_keysPressed[KEY_R] = true;
				break;

			case SDLK_g:
				m_keysPressed[KEY_G] = true;
				break;

			case SDLK_b:
				m_keysPressed[KEY_B] = true;
				break;
			case SDLK_e:
				m_keysPressed[KEY_E] = true;
				break;
			case SDLK_n:
				m_keysPressed[KEY_N] = true;
				break;
			}
		}

		//second check for key up
		else if (m_KeyEvent.type == SDL_KEYUP)
		{
			SDL_Keycode keyPressed = m_KeyEvent.key.keysym.sym;

			//update keys
			switch (keyPressed)
			{
			case SDLK_r:
				m_keysPressed[KEY_R] = false;
				break;

			case SDLK_g:
				m_keysPressed[KEY_G] = false;
				break;

			case SDLK_b:
				m_keysPressed[KEY_B] = false;
				break;
			case SDLK_e:
				m_keysPressed[KEY_E] = false;
				break;
			case SDLK_n:
				m_keysPressed[KEY_N] = false;
				break;
			}
		}

		switch (m_MouseEvent.type) 
		{
		case SDL_MOUSEBUTTONDOWN:
			std::cout << "test" << std::endl;
			break;
		}

		//third check for mouse down
		/*if (m_MouseEvent.type == SDL_MOUSEBUTTONDOWN) 
		{
			switch (m_MouseEvent.button.button) 
			{
			case SDL_BUTTON_LEFT:
				std::cout << "Left mouse clicked" << std::endl;
				break;
			case SDL_BUTTON_RIGHT:
				std::cout << "Left mouse clicked" << std::endl;
				break;


			}

			



		}*/



		//fourth check for mouse up
		
	}
}

bool Input::KeyIsPressed(KEYS_PRESSED_LIST key)
{
	return m_keysPressed[key];
}
