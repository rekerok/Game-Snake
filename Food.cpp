#include "Food.h"
void Food::Set_Position(Position *pos)
{
	this->food.heigthPos = pos->heigthPos;
	this->food.widthPos = pos->widthPos;
}
Position Food::Get_Position() { return this->food; }