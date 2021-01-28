#pragma once
#include "Field.h"
#include "Snake.h"
#include "Food.h"
class Game
{
private:
	Snake snake;
	Field map;
	Food food;
public:
	Game();
	Game(int width, int height);
	void drawMap();
	void moveSnake();
	void foodOnMap();
	// Game(int width, int height, int length);
};

