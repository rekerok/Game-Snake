#pragma once
#include "Position.h"
class Food
{
private:
	Position food;
public:
	void Set_Position(Position *pos);
	Position Get_Position();
};

