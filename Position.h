#pragma once
struct Position {
	Position()
	{
		this->widthPos = this->heigthPos = 0;
	}
	Position(int heigthPos, int widthPos)
	{
		this->widthPos = widthPos;
		this->heigthPos = heigthPos;
	}
	bool operator == (const Position pos) const {
		return this->heigthPos == pos.heigthPos &&
			this->widthPos == pos.widthPos;
	}
	int widthPos, heigthPos;
};;

