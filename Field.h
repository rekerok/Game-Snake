#pragma once
class Field
{
private:
	int width, height;
	int **map;
public:
	Field();
	void Set_Size(int width, int height);
	int Get_Width();
	int Get_Height();
	void makeMap();
	void paintNewMap();
	int *operator[](int i);
	~Field();
};

