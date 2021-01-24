#include"Functions.h"
#include <algorithm>
int randomRangeNumber(int x, int y) {
	return std::min(x, y) + rand() % (std::max(x, y) - std::min(x, y) + 1);
}