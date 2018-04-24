#include "GameLoop.h"
#include "Entity.h"

GameLoop::GameLoop(int mapLength, int mapWidth)
{
	mLength = mapLength;
	mWidth = mapWidth;
}

void GameLoop::moveEntity()
{
	ARPG::Map game(mLength, mWidth);

	game.getObjectAt(mLength);


}