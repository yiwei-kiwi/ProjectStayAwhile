#include "Map.h"

class GameLoop
{
public:
	GameLoop(int mapLength = 0, int mapWidth = 0);
	void moveEntity();

	int mLength;
	int mWidth;
};