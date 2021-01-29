#include <iostream>
#include <windows.h>
#include <ctime>
#include "Game.h"
// min + rand() % (max - min + 1);
int main() {
	srand(time(NULL));
	Game Snake(50, 20);
	while (true)
	{
		Snake.drawMap();
		Snake.moveSnake();
		system("cls");
	}
	
	return 0;
	system("pause");
}
