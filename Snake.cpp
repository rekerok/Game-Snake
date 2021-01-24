#include "Snake.h"
#include <iostream>
Snake::Snake()
{
	
}

int Snake::Get_Length() { return this->length; }

void Snake::addSegment(int widthPos, int heigthPos)
{
	PositionSegment tmp;
	tmp.widthPos = widthPos;
	tmp.heigthPos = heigthPos;
	snake.push_back(tmp);
}

void Snake::Set_Length(int length) { this->length = length; }

Snake::~Snake()
{
}