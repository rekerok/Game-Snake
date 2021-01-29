#include "Game.h"
#include <iostream>
#include "Functions.h"
#include <conio.h>
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

Position Game::randomPositionOnMap()
{
	Position tmp(randomRangeNumber(1, this->map.Get_Height() - 1),
		randomRangeNumber(1, this->map.Get_Width() - 1));
	return tmp;
}

Game::Game() {
	
}

Game::Game(int height, int width)
{

	this->map.Set_Size(height, width);
	this->map.makeMap();
	this->snake.addSegment(this->randomPositionOnMap());
	this->food.Set_Position(&this->randomPositionOnMap());
}

void Game::drawMap()
{
	map.paintNewMap();
	map[this->food.Get_Position().heigthPos][this->food.Get_Position().widthPos] = (int)'$';
	for (int i = 0; i < this->snake.Get_Length(); i++)
	{
		this->map[this->snake.Get_Position(i).heigthPos]
			[this->snake.Get_Position(i).widthPos] = (int)'0';
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

void Game::logicGame()
{
	this->snake.moveSnake();
	if (*this->snake[0] == this->food.Get_Position()){
		this->snake.addSegment(this->food.Get_Position());
		this->food.Set_Position(&this->randomPositionOnMap());
	}
}

bool Game::gameOver()
{
	if (this->snake[0]->heigthPos == 0 
		|| this->snake[0]->widthPos == 0)
		return false;
	return true;
}


//	Game::Game(int width, int height, int length) : Game::Game(width, height)
//	{
//		this->snake.Set_Length = length;
//	}
