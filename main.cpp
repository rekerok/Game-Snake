#include <iostream>
#include <windows.h>
#include <ctime>
#include "Game.h"
// min + rand() % (max - min + 1);
int main() {
	srand(time(NULL));
	Game Snake(20, 20);
	Snake.drawMap();
	return 0;
	system("pause");
}