#include "PlayerClass.h"

ARPG::PlayerClass::PlayerClass(const std::string &name, Coord location) : ARPG::Character(name, location, 0, 100, 100)
{
}

ARPG::PlayerClass::~PlayerClass()
{
}
