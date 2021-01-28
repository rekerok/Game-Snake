#pragma once
#include <iostream>
#include <vector>
struct PositionSegment
{
	int widthPos, heigthPos;
};
class Snake
{
	std::vector <PositionSegment> snake;
	int length = 0;
public:
	Snake();
	int Get_Length();
	int Get_Position_X(int index);
	int Get_Position_Y(int index);
	void addSegment(int x, int y);
	PositionSegment* operator[](int i);
	void Set_Length(int length);

	~Snake();
};

