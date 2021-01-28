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
	for (int i = 0; i < this->height; i++)
		for (int j = 0; j < this->width; j++)
			if (i == 0 || i == height - 1
				|| j == 0 || j == width - 1)
				map[i][j] = (int)'*';
			else
				map[i][j] = (int)' ';
}

void Field::paintNewMap()
{
	for (int i = 0; i < this->height; i++)
		for (int j = 0; j < this->width; j++)
			if (i == 0 || i == height - 1
				|| j == 0 || j == width - 1)
				map[i][j] = (int)'*';
			else
				map[i][j] = (int)' ';
}

int* Field::operator[](int i)
{
	return map[i];
}

Field::~Field()
{
	for (int i = 0; i < this->height; i++)
		delete[]map[i];
	delete[]map;
}


