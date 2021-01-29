#include <iostream>
#include <windows.h>
#include <ctime>
#include "Game.h"
// min + rand() % (max - min + 1);
int main() {
	srand(time(NULL));
	Game Snake(20, 50);
	while (Snake.gameOver())
	{
		Snake.drawMap();
		Snake.moveSnake();
		Snake.logicGame();
		system("cls");
	}
	
	return 0;
	system("pause");
}
