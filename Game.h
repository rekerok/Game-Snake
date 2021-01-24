#pragma once
#include "Field.h"
#include "Snake.h"
class Game
{
private:
	Snake snake;
	Field map;
public:
	Game();
	Game(int width, int height);
	void drawMap();
	// Game(int width, int height, int length);
};

