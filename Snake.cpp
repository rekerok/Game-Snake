#include "Snake.h"
#include <iostream>
#include <iterator>
using namespace std;
Snake::Snake()
{
	
}

int Snake::Get_Length() { return this->length; }

int Snake::Get_Position_X(int index) { return this->snake[index].widthPos; }

int Snake::Get_Position_Y(int index) { return this->snake[index].heigthPos; }

void Snake::addSegment(int widthPos, int heigthPos)
{
	PositionSegment tmp;
	tmp.widthPos = widthPos;
	tmp.heigthPos = heigthPos;
	snake.push_back(tmp);
	this->length++;
}

PositionSegment* Snake::operator[](int i)
{
	return &snake[i];
}



void Snake::Set_Length(int length) { this->length = length; }

Snake::~Snake()
{
}