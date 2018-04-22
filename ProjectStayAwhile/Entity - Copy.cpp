#include "Entity.h"

ARPG::Entity::Entity(std::string name, Vector velocity, unsigned int teamID, Coord location) : Object(location, 'e'), name(name), velocity(velocity), teamID(teamID) {}
