#pragma once
#include <iostream>
#include <list>
#include <iterator>
class Snake
{
	struct PositionSegment
	{
		int widthPos, heigthPos;
	};
	std::list <PositionSegment> snake;
	int length = 0;
public:
	Snake();
	int Get_Length();
	void addSegment(int x, int y);
	void Set_Length(int length);
	~Snake();
};

