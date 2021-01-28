#pragma once
class Food
{
private:
	struct PositionFood
	{
		int widthPos, heigthPos;
	};
	PositionFood food;
public:
	void Set_Position(int width, int height);
	int Get_Position_Width();
	int Get_Position_Heigth();
};

