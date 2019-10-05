#pragma once
#include <SDL.h>

enum KEYS_PRESSED_LIST 
{
	KEY_ESCAPE, KEY_R, KEY_G, KEY_B, KEY_E, KEY_N, SIZE_OF_KEYS_PRESSED_ENUM
};
class Input
{
public:
	Input();
	~Input();

	void Update();
	bool KeyIsPressed(KEYS_PRESSED_LIST key);
	void CheckForKeyPress();


private:
	SDL_Event m_event;
	bool m_keysPressed[SIZE_OF_KEYS_PRESSED_ENUM];

};

