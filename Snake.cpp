#include "Snake.h"
#include <iostream>
#include <iterator>
#include "Position.h"
using namespace std;
Snake::Snake()
{
	
}

int Snake::Get_Length() { return this->length; }

Position Snake::Get_Position(int index) { return this->snake[index]; }


void Snake::addSegment(Position pos)
{
	snake.push_back(pos);
	this->length++;
}

Position* Snake::operator[](int i)
{
	return &snake[i];
}

void Snake::Set_Length(int length) { this->length = length; }

void Snake::moveSnake()
{
	for (int i = snake.size() - 1; i > 0; i--)
		snake[i] = snake[i - 1];
}

Snake::~Snake()
{
}