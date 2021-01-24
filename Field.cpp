#include "Field.h"

Field::Field() {  }

void Field::Set_Size(int width, int height)
{
	this->width = width;
	this->height = height;
}

int Field::Get_Width() { return this->width; }

int Field::Get_Height() { return this->height; }

void Field::makeMap()
{
	map = new int *[height];
	for (int i = 0; i < height; i++)
		map[i] = new int[width];
}

Field::~Field()
{
	for (int i = 0; i < this->height; i++)
		delete[]map[i];
	delete[]map;
}


