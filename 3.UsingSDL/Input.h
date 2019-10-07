#pragma once
#include <SDL.h>
#include <iostream>
enum KEYS_PRESSED_LIST 
{
	KEY_ESCAPE, KEY_R, KEY_G, KEY_B, KEY_E, KEY_N, MOUSE_LEFT, MOUSE_RIGHT, MOUSE_MIDDLE, SIZE_OF_KEYS_PRESSED_ENUM
};
class Input
{
public:
	Input();
	~Input();

	void Update();
	bool KeyIsPressed(KEYS_PRESSED_LIST key);
	void CheckForKeyPress();

	bool m_keysPressed[SIZE_OF_KEYS_PRESSED_ENUM];
private:
	SDL_Event m_KeyEvent;
	SDL_Event m_MouseEvent;
	//bool m_keysPressed[SIZE_OF_KEYS_PRESSED_ENUM];

};

