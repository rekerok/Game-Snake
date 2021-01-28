#include "Food.h"
void Food::Set_Position(int width, int height)
{
	this->food.heigthPos = height;
	this->food.widthPos = width;
}
int Food::Get_Position_Width() { return this->food.widthPos; }
int Food::Get_Position_Heigth() { return this->food.heigthPos; }