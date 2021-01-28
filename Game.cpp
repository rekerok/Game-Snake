#include "Game.h"
#include <iostream>
#include "Functions.h"
#include <conio.h>
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

Game::Game() {
	
}

Game::Game(int width, int height)
{
	this->map.Set_Size(width, height);
	this->map.makeMap();
	this->snake.addSegment(randomRangeNumber(1, this->map.Get_Height() - 1),
		randomRangeNumber(1, this->map.Get_Width() - 1));
}

void Game::drawMap()
{
	map.paintNewMap();
	for (int i = 0; i < this->snake.Get_Length(); i++)
	{
		this->map[this->snake.Get_Position_Y(i)]
			[this->snake.Get_Position_X(i)] = (int)'0';
	}
	for (int i = 0; i < this->map.Get_Height(); i++){
		for (int j = 0; j < this->map.Get_Width(); j++)
			std::cout << (char)map[i][j];
		std::cout << std::endl;
	}
}

void Game::moveSnake() {
	switch (_getch()) {
	case KEY_UP:
		this->snake[0]->heigthPos--;
		break;
	case KEY_DOWN:
		this->snake[0]->heigthPos++;
		break;
	case KEY_LEFT:
		this->snake[0]->widthPos--;
		break;
	case KEY_RIGHT:
		this->snake[0]->widthPos++;
		break;
	default:
		break;
	}
}

//	Game::Game(int width, int height, int length) : Game::Game(width, height)
//	{
//		this->snake.Set_Length = length;
//	}
