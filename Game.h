#pragma once
#include "Field.h"
#include "Snake.h"
#include "Food.h"
#include "Position.h"
class Game
{
private:
	Snake snake;
	Field map;
	Food food;
	Position randomPositionOnMap();
public:
	Game();
	Game(int width, int height);
	void drawMap();
	void moveSnake();
	void foodOnMap();
	// Game(int width, int height, int length);
};

