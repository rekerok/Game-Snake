#include "Game.h"
#include <iostream>
#include "Functions.h"
Game::Game() {
	
}

Game::Game(int width, int height)
{
	this->map.Set_Size(width, height);
	this->map.makeMap();
	this->snake.addSegment(randomRangeNumber(1, this->map.Get_Height() - 1), randomRangeNumber(1, this->map.Get_Width() - 1));
}

void Game::drawMap()
{
	
}

//	Game::Game(int width, int height, int length) : Game::Game(width, height)
//	{
//		this->snake.Set_Length = length;
//	}