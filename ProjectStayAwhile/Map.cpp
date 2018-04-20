#include "Map.h"

ARPG::Tile::Tile(Object * obj)
{
}

bool ARPG::Tile::isEmpty()
{
	return (this->obj == nullptr);
}

ARPG::Map::Map(int length, int width) : length(length), width(width)
{
}


