#pragma once
#include <iostream>
#include <vector>
#include "Position.h"
class Snake
{
	std::vector <Position> snake;
	int length = 0;
public:
	Snake();
	int Get_Length();
	Position Get_Position(int index);
	void addSegment(Position Pos);
	Position* operator[](int i);
	void Set_Length(int length);
	void moveSnake();
	~Snake();
};

