#include "Structure.h"

ARPG::Structure::Structure(Coord location, int length, int width) : Object(location, 's', length, width)
{

}

ARPG::Structure::~Structure()
{
}

bool ARPG::Structure::isObstruction() const
{
	return true;
}

